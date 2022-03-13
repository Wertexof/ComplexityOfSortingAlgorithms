#include "functions.h"

double getTime() {
    clock_t start_time = clock();
    //фрагмент кода
    //время которое измеряется
    clock_t end_time = clock();\
clock_t sort_time = end_time - start_time;
    return (double) sort_time / CLOCKS_PER_SEC;
}

void checkTime(void (*sortFunc )(int *, size_t),
               void (*generateFunc )(int *, size_t),
               size_t size, char *experimentName) {
    static size_t runCounter = 1;

    //генерация последовательности
    static int innerBuffer[100000];
    generateFunc(innerBuffer, size);

    printf("Run #% zu| ", runCounter++);
    printf(" Name : %s\n", experimentName);
    //замер времени
    double time;
    TIME_TEST({
                      sortFunc(innerBuffer, size) ;
              }, time);
    // результаты замера
    printf(" Status : ");

    if (isOrdered(innerBuffer, size)) {
        printf("OK! Time : %.3 f s.\n", time);

        //запись в файл
        char filename[256];
        sprintf(filename, "./ data /%s. csv", name);
        FILE *f = fopen(filename, "a");
        if (f == NULL) {
            printf(" FileOpenError %s", filename);
            exit(1);
        }
        fprintf(f, "%zu; %.3f\n", size, time);
        fclose(f);
    } else {
        printf(" Wrong !\n");

        //вывод массива, который не смог быть отсортирован
        outputArray_(innerBuffer, size);

        exit(1);
    }
}

void timeExperiment () {
    //описание функций сортировки
    SortFunc sorts [] = {
            { selectionSort , " selectionSort "} ,
            { insertionSort , " insertionSort "} ,
            //вы добавите свои сортировки
            };
    const unsigned FUNCS_N = ARRAY_SIZE ( sorts ) ;

    //описание функций генерации
    GeneratingFunc generatingFuncs [] = {
            //генерируется случайный массив
            { generateRandomArray , " random "} ,
            //генерируется массив 0, 1, 2, ..., n - 1
            { generateOrderedArray , " ordered "} ,
            //генерируется массив n - 1, n - 2, ..., 0
            { generateOrderedBackwards , " orderedBackwards "}
            };
    const unsigned CASES_N = ARRAY_SIZE ( generatingFuncs ) ;

    //запись статистики в файл
    for ( size_t size = 10000; size <= 100000; size += 10000) {
        printf (" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n") ;
        printf (" Size : %d\n", size ) ;
        for (int i = 0; i < FUNCS_N ; i ++) {
            for (int j = 0; j < CASES_N ; j ++) {
                //генерация имени файла
                static char filename [128];
                sprintf ( filename , "%s_% s_time ",
                             sorts [ i ]. name , generatingFuncs [ j ]. name ) ;
                checkTime ( sorts [ i ]. sort ,
                               generatingFuncs [ j ]. generate ,
                        size , filename ) ;
                }
            }

        printf ("\n") ;
        }
}