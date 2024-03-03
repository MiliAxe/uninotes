We can have 16 different types of 4-bit numbers. Therefore, when we want to do operations with 2 different 4-bit numbers, we can have 16 operations. On hardware level, we can have [[Micro-operations]]. Some of these numbers are known to us like the AND, OR operations. Some may be unknown to us.
![[Pasted image 20240303110918.png]]

### Some operations


## Usage of a multiplexer to choose operations
A multiplexer can be used to aid the [[Control-unit]] to choose what operation it desires. In here, $S_1$ and $S_2$ are selective inputs, it comes from the [[Control-unit]]. Control unit decides which operation to use based on the instructions it is given.
![[Pasted image 20240303111125.png]]

