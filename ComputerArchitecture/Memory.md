Module for saving bits of data for extra information later on. **Read or write** input specifies whether we want to read or write to the memory. Address line is a [[1707808591-Register|Register]] that stores the address we want to do the operations on.
![[Pasted image 20240220110741.png]]

## Instruction memory format
Instructions for the CPU is stored in the following format:
![[Pasted image 20240305104501.png]]

The operation that is going to be done is stored as a code known as *opcode*. The addressing can be direct or indirect:
![[Pasted image 20240305105334.png]]

