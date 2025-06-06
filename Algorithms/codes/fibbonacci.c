#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fibbonacciRecursive(int index) {
    if (index <= 0) {
        return 0;
    } else if (index == 1) {
        return 1;
    }
    return fibbonacciRecursive(index - 1) + fibbonacciRecursive(index - 2);
}

int fibonacciDP(int index) {
    uint64_t numbers[index];

    numbers[0] = 0;
    numbers[1] = 1;

    for (size_t i = 2; i <= index; i++) {
        numbers[i] = numbers[i - 1] + numbers[i - 2];
    }

    return numbers[index];
}

#define MAX_SIZE 100

uint64_t numbers[MAX_SIZE];

int fibonacciMemo(int index) {
    if (index <= 1)
        return index;

    if (numbers[index] != -1)
        return numbers[index];

    numbers[index] = fibonacciMemo(index - 1) + fibonacciMemo(index - 2);

    return numbers[index];
}

#define TEST_INDEX 45

int main(int argc, char *argv[]) {
    clock_t start, end;
    double elapsed_time;

    for (size_t i = 0; i < MAX_SIZE; i++) {
        numbers[i] = -1;
    }

    start = clock();
    printf("Recursive result: %d\n", fibbonacciRecursive(TEST_INDEX));
    end = clock();
    elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Recursive time: %f\n\n", elapsed_time);

    start = clock();
    printf("DP result: %d\n", fibonacciDP(TEST_INDEX));
    end = clock();
    elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("DP time: %f\n\n", elapsed_time);

    start = clock();
    printf("Recursive result: %d\n", fibonacciMemo(TEST_INDEX));
    end = clock();
    elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Memo time: %f\n\n", elapsed_time);

    return EXIT_SUCCESS;
}
