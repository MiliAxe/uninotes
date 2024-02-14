---
id: Text segmentation
aliases: 
tags:
  - Algorithm
---
### Text segmentation

We have a long string without spaces we want to find whether we have a sequence of sensible
words.

e.g. hellotherethisisasentence
This can be clearly partitioned to "hello there this is a sentence"

- **Recursive Approach:**  
   Char by char go ahead and leave the rest to recursion (e.g. hello + f(the rest))

- **Dynamic Programming Approach:**
  Have a 1D array that stores whether the sub string can be partitioned into words or not
