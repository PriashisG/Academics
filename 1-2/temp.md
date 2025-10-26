# Combinations and Permutations

- **Combination:** order does not matter. ${\text{ABC \& CBA is same}}$
- **Permutation:** oder matters. ${\text{ABC \& CBA is not same}}$

**Formula of Combination:**
$$nCk = \binom{n}{k} = \frac{n!}{k! \times (n - k)!}$$
**Formula of Permutation:**
$$nPk= P(n, k) = \frac{n!}{(n-k)!}$$

## Rule of Sum
If a task can be done in either one of $n_1$ ways or in one of $n_2$ ways, where the two sets of ways are disjoint, then there are $n_1 + N_2$ ways to complete the task.

**Question - 01:** A computer science instructor has two colleagues. One colleague has three textbooks on the analysis of algorithms and the other has 5 textbooks. If n denotes the maximum number of different books on this topic that this instructor can borrow, give the possible value(s) for n.

**Solution:** $5 \leq n \leq 8$  

## Rule of Product
A procedure can be broken down into a sequence of two tasks. If there are $n_1$ ways to do the first task and $n_2$ ways to do the second task, then tasks $n_1$ and $n_2$ can be done in $n_1 \times n_2$ ways.

**Question - 02:** How many student IDs are possible with an even number of "A"'s?

**Solution:** $\text{0's A + 2's A}$. For $\text{0's A} = 25 \times 25\times 25\times 10 \times 10$ and $\text{2'A} = \frac{3!}{2!} \times (25 \times 10 \times 10)$ 

## Complement Rule
It means solving a problem by finding the opposite case first. Instead of directly counting what we want, we count what we **don’t want** and subtract from the total possible outcomes.

**Example:** For a student ID with $3$ capital letters followed by $2$ digits,
- Total possible IDs = $1,757,600$
- It’s easier to find how many IDs have **no repeats**, then subtract that from the total to get the number of IDs with repetition.
So, $$\text{IDs with repetition} = \text{Total sample space} - \text{IDs with no repeats}$$
**Question - 03:** Each user on a computer system has a password, which is six to eight characters long, where each character is an uppercase letter on a digit. Each password must contain at least one digit. How many possible passwords are there?

**Solution:** $N_t = N_6 + N_7+N_8= (36^6 - 26^6) + (36^7-26^7) + (36^8-26^8)$

**Question - 04:** In a six digit number, no digit may be repeated and it's a even number.

**Solution:** $N_t = N_{\text{0 in last}}+ N_{\text{0 not in last}} = (9\times 8 \times 7 \times 6\times 5 \times 1) + (8 \times 8 \times 7 \times 6 \times 5 \times 4)$

![[Screenshot 2025-10-24 at 12.46.10 PM.png|600]]


## Subtraction Rule
If a task an be done in either $n_1$ ways or $n_2$ ways, then the total number of ways to do the task is $n_1 + n_2$ minus the number of ways to do the task that were counted in both $n_1$ and $n_2$.
$$|A \cup B| = |A| + |B| - |A\cap B|$$

![[Screenshot 2025-10-24 at 12.50.04 PM.png|600]]



