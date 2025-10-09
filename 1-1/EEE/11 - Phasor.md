

# Sinusoids

- **A sinusoid is a signal that has the form of the sine or cosine function**
- A sinusoidal signal is easy to generate and transmit
- Sinusoidal voltage generated through out the world and supplied to homes, factories, laboratories, and so on

Consider the sinusoidal $v(t) = V_msin(\omega t)$
where,
	$V_m$ = the amplitude of the sinusoid
	$\omega$ = the angular frequency in radians/s

![[Pasted image 20250103005730.png]]

$T$ = Time period of the sinusoid
$$
T = \frac{2\pi}{\omega}
$$
- $v(t)$ repeats itself every T seconds

$$
v(t + T) = V_msin\omega (t + T)
$$
$$
= V_msin( \omega(t + \frac{2\pi}{\omega}))
$$
$$
= V_msin (\omega t + 2\pi)
$$
$$
= V_msin\omega t
$$
$$
= v(t)
$$
$$
\therefore\ v(t + T) = v(t)
$$

- A periodic function is one that satisfies $f(t)$ = $f(t + nT)$, for all t and for all integers n.

Time period $T$ of the periodic function is the time of one complete cycle

and the number of cycles per second, known as frequency f
$$
f = \frac1T
$$
- Unit of f is hertz (Hz)

Expression for the sinusoid
$$
v(t) = V_msin (\omega t + \phi)
$$
Where, $\phi$ is the phase
$$
\omega t + \phi = 0
$$
$$
\omega t = -\phi
$$
"-" sign indicate signal start from the left side of origin
"+" sign indicate signal start from the right side of origin
$\omega t =  0$ indicate signal start from the origin

![[Pasted image 20250103011429.png]]


A sinusoid can be expressed in either sine or cosine form

For example,
$$
v_2 = 12sin(\omega t - 10\degree)
$$
this wave can be expressed as cosine function
$$
v_2 = 12cos(\omega t - 100\degree)
$$

When comparing two sinusoids, both sinusoids is expressed as either sine or cosine with positive amplitudes.

Sine to cosine conversion or vice versa are achieve by using the following trigonometric formula
$$
sin(\omega t \pm 180\degree) = -sin\omega t
$$
$$
cos(\omega t \pm 180 \degree) = -cos\omega t
$$
$$
sin(\omega t \pm 90\degree) = \pm cos\omega t
$$
$$
cos(\omega t \pm 90\degree) = \mp sin\omega t
$$

### Calculating Phase Angle Between Two Sinusoids

if phase angle $v_1$ = $-40\degree$ and $v_2$ = $-10\degree$
then, phase angle between $v_1$ and $v_2$ = phase angle of $v_1$ - phase angle of $v_2$ =  ($-40\degree$) - ($-10\degree$) = $-30\degree$

so we can say that
$v_1$ lags $v_2$ by $30\degree$
or, $v_2$ leads $v_1$ by $30\degree$



