#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char *argv[]) {
    printf("%d", fibonacciDP(100));

    return EXIT_SUCCESS;
}
