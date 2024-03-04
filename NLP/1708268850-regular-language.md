---
id: Regular language
aliases:
  - regular-language
  - regular language
tags:
  - NLP
---
A [[1708268391-language|language]] is regular if there is a [[1708263536-DFA|DFA]] for it.

**In order to prove a [[1708268391-language|language]] is regular we have to show a [[1708263536-DFA|DFA]] exists for it**

## Properties
If we have the regular language $L_1$ and $L_2$, they are closed under **Union, Concatenation, and star.**

### Union
![[Pasted image 20240226104520.png]]
The [[1708889306-Lambda-transition|Lambda transition]] enables us to have both of these ways

### Concatenation
![[Pasted image 20240226104556.png]]
Again, we can easily line them up like so using [[1708889306-Lambda-transition|lambda transitions]].

## Closed under...
TODO: needs refactoring
Regular languages are closed under the operations of:
- Union
- Concatenation
- Star operation
- Reverse
- Complement
- Intersection
# Representations
A [[1708268850-regular-language|regular-language]] can be represented in the following ways:
- [[1708263536-DFA|DFA]]
- [[1708326485-NFA|NFA]]
- [[Regular-expressions]]
- [[regular-langugae]]

# FAQ
- How can we check if a string is inside a [[1708268850-regular-language|Regular language]]? 