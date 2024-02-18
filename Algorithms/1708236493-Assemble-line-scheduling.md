---
id: Assemble-line-scheduling
aliases:
tags:
---
The problem consists of two lines of product development we can jump between them but with a cost. we want to fine the best route using DP.
![[Pasted image 20240218093034.png]]
We can have a n * 2 table that represents the shortest path to each node, we can fill each column using the data of the previous column because the last column shows the least cost to get to that previous node.
