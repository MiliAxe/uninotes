---
id: Matrix Chain
aliases:
  - Matrix-chain
tags:
---
This is a problem solvable by [[1707802928-Dynamic-Programming|Dynamic Programming]] approach.

## Problem definition
We have the matrices $A_1A_2\dots A_n$ we want to find the result of $A_1 A_n$ with the least amount of calculations possible. 

But how can we find the most optimal solution?

This lies within which two matrices with multiply. For example, we have the following possible parentheses in the multiplication of $A_1 A_4$.
![[Pasted image 20240220095357.png]]

## [[1707802928-Dynamic-Programming|Dynamic Programming]] approach
First, we should find the sub problems that we need to solve. Assume we want to find the most optimal multiplication of $A_1 A_4$. We will have the following sub problems:
$$A_1A_{34}$$
$$A_{12}A_{34}$$
$$A_{13}A_{4}$$

The approach we can 