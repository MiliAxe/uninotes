---
id: 1707802928-Dynamic-Programming
aliases:
  - 01-AL
tags: []
---
# Dynamic Programming

Recursion works well when we don't have duplicate calculations.
Dynamic programming works well when we have a bunch of duplicate calculations.
Usually, 1D, 2D and 3D and ... arrays are needed to store the result of the calculations.
We can consider the solutions to be bottom-up.

3 ways of solving problems.

1. Recursion
2. Dynamic Programming (for problems that have duplicate sub problems) (from bottom-up)
3. Very complex that are not solved with the two above.

### Fibonacci

```latex
F_n = {0 if n = 0; 1 if n = 1 ; F*{n-1} + F\_{n-2} if else}
```

Recursion has a lot of duplicate calculations.
A 1D array can be used to calculate the number we want starting from the start till the
end will give us the cost of O(n)

**Recursive approach**
```c
int nthFibonacciNum(int index) {
    if (index <= 0) {
        return 0;
    } else if (index == 1) {
        return 1;
    }
    return nthFibonacciNum(index - 1) + nthFibonacciNum(index - 2);
}
```
![[Pasted image 20240214153353.png]]

**Dynamic Programming approach**
```c
int fibonacciDP(int index) {
    uint64_t numbers[index];

    numbers[0] = 0;
    numbers[1] = 1;

    for (size_t i = 2; i <= index; i++) {
        numbers[i] = numbers[i - 1] + numbers[i - 2];
    }

    return numbers[index];
}
```
![[Pasted image 20240214155900.png]]
### Text segmentation

We have a long string without spaces we want to find whether we have a sequence of sensible
words.

e.g. hellotherethisisasentence
This can be clearly partitioned to "hello there this is a sentence"

- **Recursive Approach:**  
   Char by char go ahead and leave the rest to recursion (e.g. hello + f(the rest))

- **Dynamic Programming Approach:**
  Have a 1D array that stores whether the sub string can be partitioned into words or not
