# Differential form
- ![[Screenshot 2025-09-23 at 10.27.50 AM.png]]

# variable separation
1. direct
2. let $x + y = t$ 
- ![[Screenshot 2025-09-23 at 10.31.41 AM.png]]
- the formula ![[Screenshot 2025-09-23 at 10.33.02 AM.png|400]]

# Homogenous
1. always $y = vx$

- ![[Screenshot 2025-09-23 at 10.43.50 AM.png]]


# Reducible to homogenous
$$\frac{dy}{dx}= \frac{a_1x +b_1y +c_1}{a_2x +b_2y +c_2}$$
- case - 1: $\frac{a_1}{a_2} = \frac{b_1}{b_2}$ : let $a_1x + b_1 y = v$  then variable separation.
- case - 2 : $\frac{a_1}{a_2} \neq \frac{b_1}{b_2}$ : $x = X + h$ & $y = Y + k$ then homogenous.

# Exact
1. $\frac{\partial M}{\partial y} = \frac{\partial N}{\partial x}$ then solution :
$$\int M\ dx + \int N[\text{without x term}] \ dy = c$$

# Reducible to exact
$$\frac{\partial M}{\partial y} \neq \frac{\partial N}{\partial x}$$
1. $\frac{\frac{\partial M}{\partial y} - \frac{\partial N}{\partial x}}{N} = f(x)$  then Integrating Factor = $e^{\int f(x) dx}$.
2. $\frac{\frac{\partial N}{\partial x} - \frac{\partial M}{\partial y}}{M} = g(y)$  then Integrating Factor = $e^{\int g(y) dx}$.
eikhane ja diye vag dibo and RHS e ja asbe sob 2nd part er sapekkhe... jemn $\frac{\frac{\partial M}{\partial y} - \frac{\partial N}{\partial x}}{N} = f(x)$ eikhane vag geche $N$ diye and RHS e $f(x)$.

- just integrating factor ![[Screenshot 2025-09-23 at 11.15.15 AM.png]]

# First order linear differential equation 
1. $$\frac{dy}{dx} + P(x) \cdot y = Q(x)$$
2. $$\frac{dx}{dy} + P(y) \cdot x = Q(y)$$
- for (1) the integrating factor = $e^{\int P(x)dx}$ 
- for (2) the integrating factor = $e^{\int P(y)dy}$ 
Then the solution will be :
1. $$y\cdot I.F. = \int Q(x) \cdot I.F. + c$$
2. $$x\cdot I.F. = \int Q(y) \cdot I.F. + c$$

# Reducible to linear (Bernouli equation)
$$\frac{dy}{dx} + P(x) \cdot y = Q(x) \cdot y^n$$
Let, $v = y^{1-n}$ then convert the equation to $\frac{dv}{dx}$ then linear.


# Application of 1st order linear equation

- Electrical Circuit: (equation for LR circuit )
	![[Screenshot 2025-09-23 at 11.29.03 AM.png | 300px]]
- Newton's law of cooling: 
	![[Screenshot 2025-09-23 at 11.32.30 AM.png]]
- Population growth with limited resources
- Radioactive decay

# Homogenous linear differential equations of order n with constant coefficient

$$a_0 D^n + a_1D^n-1 + ..... a_ny=0 \quad[D = \frac{dy}{dx}]$$
now let $D = m$ and convert the equation:
$$a_0m^n + a_1m^{n - 1} + ... + a_n = 0$$
then find the roots
- case - 1 : All roots are distinct. 
![[Screenshot 2025-09-23 at 11.38.57 AM.png]]
- case - 2 : All roots are real and same.
![[Screenshot 2025-09-23 at 11.39.36 AM.png]]
- case - 3 : if the roots are complex number. $(a\pm ib)$  
![[Screenshot 2025-09-23 at 11.40.03 AM.png]]

# Non-homogenous linear equation with constant coefficient

## Complementary function:
$L(y)= f(x)$ where $L(y)$ is linear operator and $f(x)$ is a known function. The complementary function is the general solution of the associated homogenous equation. i.e. $L(y) = 0$.

## Partial Integral:
The partial integral is any one specific solution of the full non-homogenous equation.


the complete solution of the equation is :
$$y = C.F. + P.I.$$



- Rule - 01: $y_p = \frac{1}{D - a} \cdot x^m$
eikhane common niye eke $\frac{1}{-a}(1-\frac{D}{a})^{-1} \cdot x^m$ convert korte hobe 
then :
![[Screenshot 2025-09-23 at 12.23.48 PM.png]]

- Rule - 02: $y_p = \frac{1}{f(D) - a} \cdot e^{ax}$
eibar $f(a) \neq 0$ houya porjonto opore $x$ diye multiply and niche derivative korte hobe r check korte hobe $0$ hoi kina. Jekhane 0 hobe na oitai je value pabo oitar equation holo PI


- Rule - 03: $y_p = \frac{1}{f(D) - a} \cdot sin(ax+b) / cos(ax+b)$
eikhane shurute $D^2$ er jaigai $-a^2$ er value bosate hobe... $[a=2 \ then \ -a^2 = -4]$ 
then jodi $0$ na ase tahole oitaii PI. r $0$ asle opore x multiply then niche derivative. then niche $D^2$ nai tai niche $(a+b)(a-b) = a^2 - b^2$ er moto banate hobe opore niche multiply kore. then abr check diye dekhte hobe niche 0 kina. 0 na hole opore vangaye niye ja derivative ase korte hobe.. then oitaii ans.

