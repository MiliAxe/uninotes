If two states are equivalent in a [[1708263536-DFA|DFA]], it means that for each string as input for the states $p$ and $q$, it definetly goes to a final state in **both** of the states or it goes to a non-final state in **both** of the states. Formally, we would say that:
$$\delta^*(p,w)\in F \Rightarrow \delta^*(q,w)\in F$$
$$\delta^*(p,w)\notin F \Rightarrow \delta^*(q,w)\notin F$$

## K-order equivalence 
We can expant this definition to a recursive definition. This will make the algorithm easier to process for us.

### Zeroth-order equivalency
In the zeroth order, this is fairly simple. all the final states are zeroth-order equivalent and also all the non-final states are zeroth-order equivalent.
$$p\equiv_0q \iff p,q \in F \$$

### K-order equivalency
In order for two pair of states of $p$ and $q$ be Kth order equivalent we have to:
$$p\equiv_{k-1}q \wedge \forall a \in \Sigma, (\delta(p,a) \equiv_{k-1} \delta(q,a))$$