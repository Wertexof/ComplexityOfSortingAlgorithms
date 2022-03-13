#ifndef SORTS_PROJECT_TESTS_H
#define SORTS_PROJECT_TESTS_H

#define TIME_TEST (testCode, time) { \
clock_t start_time = clock () ; \
testCode \
clock_t end_time = clock () ;\
clock_t sort_time = end_time - start_time ; \
time = ( double ) sort_time / CLOCKS_PER_SEC ; \
}

#endif
