**A function is a relation between dependent and independent variable.**

# Odd Function 

**A function f(x) is said to be odd if it changes sign with the change of sign of the variable x that is if f(-x) = -f(X).**

**Example :** $$f(x) = x^3$$
# Even Funciton

**A function is said to be even if it  doesn't change sign with the change of sign of the variable x that is if f(-x) = f(x).**

**Example :** $$f(x) = x^2$$
**Question - 01 :** Odd or Even function??  $$f(x) = Log(x+\sqrt{1+x^2})$$
Ans : Odd.

# Monotone Function

Let, x_1 and x_2 be any two points such that x_1 < x_2 in the interval of definition of a function f(x) is said to be monotonically increasing if f(x_1) < f(x_2) and monotonically decreasing if if f(x_1) > f(x_2).

$$ if \ x_1 < x_2$$
$$\Rightarrow \ f(x_1) > f(x_2) \ that\ is\ increasing.$$
$$\Rightarrow \ f(x_1) < f(x_2) \ that\ is\ decreasing.$$

# Limit

**Question : Define limit?? What are the differences between $\lim_{x \to a} f(x)$ and $f(x).$**

A function 𝑓(𝑥) is said to have a limit l at x tends to a if for every positive number 𝜀, we can determine another small positive number 𝛿, such that |𝑓(𝑥) − l| < 𝜀 for all values of x which satisfying the inequality|𝑥−𝑎|≤𝛿 and it is denoted by
$$\lim_{x \to a} f(x) = \ell$$

**Right hand Limit:** A function $f(x)$ is said to have a right hand limit $\ell_1$ at $x$ tends to $a$ if for every positive number $\varepsilon$, we can determine another small positive number $\delta$, such that $| f(x) - \ell_1 | < \varepsilon$ for all values of $x$ which satisfy the inequality $x - a \leq \delta$ and it is denoted by $\lim_{x \to a^+} f(x) = \ell_1 \quad \text{or,} \quad \lim_{h \to 0} f(a + h) = \ell_1.$

**Left hand Limit:** A function $f(x)$ is said to have a left hand limit $\ell_2$ at $x$ tends to $a$ if for every positive number $\varepsilon$, we can determine another small positive number $\delta$, such that $| f(x) - \ell_2 | < \varepsilon$ for all values of $x$ which satisfy the inequality $a - x \leq \delta$ and it is denoted by $\lim_{x \to a^-} f(x) = \ell_2 \quad \text{or,} \quad \lim_{h \to 0} f(a - h) = \ell_2.$


# Continuity

**Ans: Continuity:** A function $f(x)$ is said to be continuous at $x = a$ if its limit exists at that point and is equal to its functional value at $x = a$, i.e., $\lim_{x \to a^+} f(x) = \lim_{x \to a^-} f(x) = f(a).$ or, $\lim_{h \to 0} f(a + h) = \lim_{h \to 0} f(a - h) = f(a).$


# Differentiation

**Q1.** Define differentiability of a function at any point. Show that every differentiable function is continuous but converse is not always true. Or, Prove that if f′(a)f'(a) is finite, then f(x)f(x) must be continuous at x=ax = a.

**Differentiable:** A function f(x)f(x) is said to be differentiable at x=ax = a if
$$\frac{f(a+h) - f(a)}{h} = \lim_{h \to 0^-} \frac{f(a-h) - f(a)}{-h}$$

i.e., the right-hand limit (R.H.L) of $f'(x)$ is equal to the left-hand limit (L.H.L) of $f'(x).$

From the definition of differentiation, we can write:
$$f'(a) = \lim_{h \to 0} \frac{f(a+h) - f(a)}{h}$$

Now, we can write:
$$f(a + h) - f(a) = \frac{f(a+h) - f(a)}{h} \times h$$
Or,
$$\lim_{h \to 0} f(a + h) - f(a) = \lim_{h \to 0} \left\{ \frac{f(a+h) - f(a)}{h} \times h \right\} $$$$h= \lim_{h \to 0} \frac{f(a+h) - f(a)}{h} \times \lim_{h \to 0} h $$$$=f′(a)×0= f'(a) \times 0 =0 \quad [\text{since } f'(a) \text{ is finite.} ]$$$$\lim_{h \to 0} f(a + h) = f(a).$$

Thus, from the definition of continuity, it follows that $f(x)$ is continuous at $x = a.$  
Hence, for the differential coefficient of $f(x)$ to exist finitely for any value of $x$, the function $f(x)$ must be continuous at the point.  The converse is not always true.