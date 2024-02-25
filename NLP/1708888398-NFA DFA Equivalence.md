---
id: NFA DFA Equivalence
aliases:
  - NFA DFA Equivalence
tags:
  - NLP
---
[[1708326485-NFA|NFA]] and [[1708263536-DFA|DFA]] have the same "power" or to be more exact, they accept the same languages.

# Proof
In order to show that these two have the same power. We should show that the set of languages accepted by [[1708326485-NFA|NFA]] (Set $N$). are the same set of languages accepted by [[1708263536-DFA|DFA]] (Set $D$).

If we want to prove this, we can show that:
$$D \subseteq N$$
then show that:
$$N \subseteq D$$
And if we can successfully show the two above, we can claim that:
$$N = D$$

## $D \subseteq N$
This one is fairly simple because every [[1708263536-DFA|DFA]] is also an [[1708326485-NFA|NFA]] therefore, we can claim that the above is correct. We know that the [[1708326485-NFA|NFA]] must be at least *larger*.

## $N \subseteq D$
This one is a little bit trickier since we should show that every [[1708326485-NFA|NFA]] can be converted into a [[1708263536-DFA|DFA]]

