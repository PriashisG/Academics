- **Periodic:** Time period will be same.
- Amplitude same
- Restoring force is always directed towards the main position.
![[Pasted image 20250707022508.png]] 
If any motion fulfilled above 3 conditions, it called Simple Harmonic Motion.

# Derivation

![[Screenshot 2025-07-06 at 4.04.47 PM.png]]
$$F \propto y$$
$$\Rightarrow F= -ky$$
$$\Rightarrow my^" + ky = 0\quad [F = my^"]$$
$$\Rightarrow \frac{d^2y}{dt^2} + \frac{k}{m}y = 0$$
$$\Rightarrow \frac{d^2y}{dt^2} + \omega^2y = 0 $$
Here, $\omega =\text{Angular Velocity} =\sqrt{\frac{k}{m}}$

The equation is a second order linear homogeneous equation. This is the differential equation of simple harmonic motion.

Solving the equation of simple harmonic motion:
$$\frac{d^2y}{dt^2} = -\omega^2y$$
Multiplying both sides by $2\frac{dy}{dt}$:
$$2 \cdot \frac{dy}{dt} \cdot \frac{d^2y}{dt^2} = -\omega^2y \cdot 2 \cdot \frac{dy}{dt}$$
$$\Rightarrow 2 \cdot \frac{dy}{dt} \cdot \frac{d^2y}{dt^2} = -\omega^2 \cdot 2 \cdot \frac{dy}{dt} \cdot y$$
Integrating with respect to time, we have 
$$(\frac{dy}{dt})^2 = -\omega^2y^2 + C$$
At $y = A, V = 0$. So, $\frac{dy}{dt} = 0$
$$\therefore 0 = - \omega^2y^2 + C $$
$$\Rightarrow C = \omega^2a^2$$
Now,
$$(\frac{dy}{dt})^2 = -\omega^2y^2 + \omega^2a^2$$
$$\Rightarrow \frac{dy}{dt} = \pm \ \omega\sqrt{a^2-y^2}$$
$$\Rightarrow \int{\frac{dy}{\sqrt{a^2-y^2}}} = \int{\omega dt}$$
$$\Rightarrow sin^{-1}\frac{y}{a} = \omega t + \phi$$
$$\therefore y = asin(\omega t + \phi)$$
This is the one and only best solution of the differential equation of SHM.
![[Screenshot 2025-07-06 at 11.40.34 PM.png|300]]

Again,
$$y = asin(\omega t) \cdot cos\phi + acos(\omega t) \cdot sin\phi$$
$$\Rightarrow y = Asin(\omega t) + Bcos(\omega t)$$
Let, $acos\phi = A$ and $asin\phi = B$ 

In special cases either A or B maybe zero.
$$y_1 = Asin(\omega t)$$
$$y_2 = Bsin(\omega t)$$
$y = y_1+y_2$ satisfies the differential equation.

There is another form of the equation :
$$y(t) = \text{Real}[Ae^{i(\omega t + \theta)}] \quad[i = \sqrt{-1}]$$
$$\Rightarrow y(t) = \text{Real}[Acos(\omega t + \phi) + i \cdot f(t)]$$
Here, $f(t)$ is a real function.

if $f(t)$ is arbitrary, plotting the $y(t)$ we will find that the locus will be mysterious.
![[Screenshot 2025-07-06 at 11.57.34 PM.png|500]]

It $f(t)$ is confined that is a periodic and real function the locus will be a circle.
![[Screenshot 2025-07-06 at 11.59.09 PM.png|500]]

The projection will rotate across the circumstance:
$$x = OM cos(\omega t)$$
$$x = a cos(\omega t) = y_1$$
$$y = a sin(\omega t) = y_2$$
Due to the projection of uniform circular motion on the diameter (axis), simple harmonic motion is obtained.
$$y = e^{mt}$$
$$\Rightarrow y_1 = me^{mt}$$
$$\Rightarrow y_2 = m^2e^{mt}$$
Now,
$$e^{mt} \neq 0$$
$$\therefore m^2 \omega^2 = 0$$
$$\Rightarrow m = \pm \ i \omega$$
The two solutions are,
$$y_1 = Ae^{i \omega t}$$
$$y_2 = Be^{i \omega t}$$
Now, differentiating
$$y_n = m^n e^{i \omega t}$$
This is the simple harmonic motion characteristic. This can't be killed by differentiation. So, it is compared by **Phoenix Bird**. 

Amplitude and phase will be constant for the equation.

$$y = Asin(\omega t) + Bcos(\omega t)$$
$$\Rightarrow y_1 = Asin(\omega t)$$
$$\Rightarrow y_2 = Acos(\omega t)$$
$$\therefore y = Ae^{\pm i \omega t}$$

![[Screenshot 2025-07-07 at 12.15.45 AM.png|400]]

$$v = \frac{dy}{dt}$$
$$a = \frac{d^2y}{dt^2}$$
Examples of SHM: Spring, AC circuit, Atomic vibration, Electromagnetic wave, Motion of piston in gas chamber, Motion of mercury in U-tube.

For simple pendulum :
![[Screenshot 2025-07-07 at 12.18.37 AM.png|500]]

Restoring force here is $\text{mgsin}\theta$  which is the only effective component. If $\theta$ is small so it can be written as $\text{mg}\theta$. As it is a restoring force. There will be a negative sign.

Linear displacement,
$$y = l \theta$$
$$\Rightarrow y_1 = l \frac{d\theta}{dt}$$
$$\Rightarrow y_2 = l \frac{d^2\theta}{dt^2}$$
Now, 
$$my_2 = m\vec{a} = ml\frac{d^2 \theta}{dt^2}$$
From, Newton's second law of motion,
$$ml\frac{d^2 \theta}{dt^2} = -mg\theta$$
$$\Rightarrow ml\frac{d^2 \theta}{dt^2} + mg\theta = 0$$
$$\therefore \frac{d^2 \theta}{dt^2} + \omega^2 \theta = 0$$
Here, $\omega = \sqrt{\frac{g}{l}}$
This equation looks very similar to the differential equation of SHM.

The solution of the equation is,
$$\theta = \theta_n sin(\omega t + \phi)$$
$$\text{or, }\theta = \theta_n sin(\omega t + \phi)$$
This indicates that motion is oscillatory.

### LC - circuit :
![[Screenshot 2025-07-07 at 12.28.23 AM.png]]

At first capacitor will be charged by disconnecting the inductor and connecting with the battery and later on it will be discharge. This LC circuit will continue to charge and discharge. If the charge is $Q$, the voltage across capacitor, 
$$V = \frac{Q}{C}$$
The EMF developed in the inductor due to the change of current through it will be,
$$E = L \frac{di}{dt}$$
Considering it a mechanical hinderance. There will be a negative sign.
$$\therefore \frac{Q}{C} = -L\frac{di}{dt}$$
$$\Rightarrow L \cdot \frac{d}{dt} \cdot \frac{dQ}{dt} + \frac{Q}{C} = 0$$
$$\Rightarrow L\frac{d^2Q}{dt^2} + \frac{Q}{C} = 0\ ......(\text{i})$$
Applying KVL to the circuit,
$$L\frac{di}{dt} + V = 0$$

From $(\text{i})$ ,
$$\frac{d^2Q}{dt^2} + \frac{Q}{LC} = 0$$
$$\Rightarrow \frac{d^2Q}{dt^2} + \omega^2 t = 0\ ......(\text{ii})$$
Here, $\omega = \sqrt{\frac{1}{LC}}$

From the 2nd equation of the motion of charge between the capacitor and the inductor which is very similar to the equation of SHM. So, we can say that the motion of charge in an ideal LC circuit is a SHM.

The solution the equation will be:
$$Q = Q_\circ \ sin(\omega t + \phi)$$
The wave of motion: 
![[Screenshot 2025-07-07 at 12.42.18 AM.png|500]]

If the circuit is not idea, then the motion will be oscillatory but the amplitude will be 0 at a after a period of time. The equation,
$$\frac{d^2Q}{dt^2}+ \omega^2 Q + i R = 0 \quad [V = 0]$$
![[Screenshot 2025-07-07 at 12.44.26 AM.png|500]]

For non-conservative force affecting the system, we have to add all of them to the SHM equation.

### Energy of SHM (in the absence of any conservation forces)

The total energy of a harmonic oscillatory will be the sum of kinetic and potential energy:
$$\therefore E = K.E. + P.E.$$
$$=\frac{1}{2}mv^2+\frac{1}{2}ky^2$$
$$=\frac{1}{2}ma^2 \omega^2 cos^2(\omega t+\phi) + \frac{1}{2}ka^2 \omega^2 sin^2(\omega t+\phi)$$
$$=\frac{1}{2}ka^2[sin^2(\omega t + \phi) + cos^2(\omega t + \phi)] \quad [\omega = \sqrt{\frac{k}{m}}]$$
$$=\frac{1}{2}ka^2$$
$$=2\pi^2 n^2 a^2 m = constant$$
Here, $n =$ frequency

![[Screenshot 2025-07-07 at 12.56.19 AM.png]]

Average, $$\text{K.E.} = \frac{1}{T} \int_{0}^{T} \frac{1}{2}mv^2dt$$
$$=\frac{1}{4}ka^2$$
$$\text{P.E.} = \frac{1}{T}\int_{0}^{T} \text{P.E.}\ dt$$
$$=\frac{1}{4}ka^2$$


### Composition of simple harmonic motion 

If one or more SHM motions act simultaneously on a particle, two SHM acting simultaneously in a straight line,

The two SHM's are,
$$y_1 = a_1sin(\omega t + \alpha_1)$$
$$y_2 = a_1sin(\omega t + \alpha_2)$$

The resulting motion will be the vector sum of individual displacement.
$$y = y_1 + y_2$$
$$= (a_1 cos\ \alpha_1 + a_2cos\ \alpha_2)sin(\omega t) + (a_1cos\ \alpha_1 +a_2sin\ \alpha_2)cos(\omega t)$$
$$= Acos\ \phi \cdot sin(\omega t) + Asin \phi \cdot cos(\omega t)$$
Let, $$a_1 cos\ \alpha_1 + a_2cos\ \alpha_2 = Acos\phi\ .....(i)$$$$a_1 sin\ \alpha_1 + a_2 sin\ \alpha_2 = Asin\phi\ .....(ii)$$

The resultant motion will be:
$$y = Asin(\omega t + \phi)$$ which is SHM motion. 
- The nature of the motion - Oscillatory 
- The amplitude will be different

$(i)^2 + (ii)^2 \Rightarrow$
$$A =\sqrt{a_1^2 + a_2^2 + 2a_1a_2\cdot cos(\alpha_1 - \alpha_2)}$$
If $\alpha_1 = \alpha_2 = \alpha$ that means two vibrations in same phase then,
$$A = a_1 + a_2$$
If $\alpha_1 - \alpha_2 = (2n+1)\pi$ then,
$$A = a_1 - a_2$$
![[Screenshot 2025-07-07 at 1.22.28 AM.png]]

### Composition of two perpendicular SHM:

Let, $$x = asin(\omega t + \phi)$$
$$\Rightarrow \frac{x}{a} = sin(\omega t) \cdot cos\phi + cos(\omega t)\cdot sin\phi$$
And,
$$y = bsin(\omega t)$$
$$\Rightarrow \frac{y}{b} = sin(\omega t)$$

Now,
$$\frac{x}{a}= \frac{y}{b}cos\phi + \sqrt{1 - \frac{y^2}{b^2}} \cdot sin\phi$$
$$\Rightarrow (\frac{x}{a} - \frac{y}{a}cos\phi)^2 = (a- \frac{y^2}{b^2})\cdot sin^2\phi$$
$$\Rightarrow \frac{x^2}{a^2} + \frac{y^2}{b^2} - \frac{2xy}{ab}cos\phi = sin^2\phi$$
It's a generation equation of conic. The shape will depend upon $\phi$ and $a$ and $b$.
If, $\phi = 0, 2\pi, 4\pi, ...., 2n\pi$ , then 
$$(\frac{x}{a} - \frac{y}{b})^2 = 0$$
$$\Rightarrow y = \pm \frac{b}{a}x$$
It represents the equation of a pair of coincident straight lines passing through the origin.

If two simple harmonic motions act on a point perpendicularly and simultaneously, the resultant motion will trace a figure. This figure is called a **Lissajous figure**.

![[Screenshot 2025-07-07 at 1.33.43 AM.png|500]]
- Angle of inclination will be $45^\circ$, when $a=b$
- **Advantage:** Extract characteristics of any unknown signal.
- **Example:** Cathode ray oscilloscope, in the mining process.

If $\phi = \pi$, then
$$sin\phi = 0, cos\phi = -1$$
$$\therefore y = \pm \frac{b}{a}$$
![[Screenshot 2025-07-07 at 1.45.58 AM.png]]

If $\phi = \frac{\pi}{2}$, then 
$$\frac{x^2}{a^2} + \frac{y^2}{b^2} = 1$$
Equation of a symmetrical ellipse.
If $a = b$, then it will be an equation of circle.
![[Screenshot 2025-07-07 at 1.48.57 AM.png]]

### Example :

$$y = bsin(\omega t)$$
$$\Rightarrow \frac{y}{b} = sin(\omega t)$$
And,
$$x = asin(2\omega t + \phi)$$
$$\Rightarrow \frac{x}{a} = sin(2\omega t)\cdot cos\phi + cos(2\omega t) \cdot sin\phi$$
$$\Rightarrow \frac{x}{a} = 2sin(\omega t) \cdot cos(\omega t)\cdot cos\phi + (1 - 2sin^2(\omega t)\cdot sin\phi)$$
$$\Rightarrow \frac{x}{a} = 2 \cdot \frac{y}{b} \cdot \sqrt{1-\frac{y^2}{b^2}}\cdot cos\phi + (1 - 2\cdot \frac{y^2}{b^2})\cdot sin\phi$$
$$\Rightarrow (\frac{x}{a} - sin\phi)^2 + \frac{4y^4}{b^4}sin^2\phi + 2(\frac{x}{a} - sin\phi)\cdot 2\frac{y^2}{b^2}sin^2\phi = \frac{4y^2}{b^2}cos^2\phi \cdot \sqrt{1- \frac{y^2}{b^2}}$$
$$\therefore (\frac{x}{a} - sin\phi)^2 + \frac{4y^2}{b^2}(\frac{y^2}{b^2} + \frac{x}{a}sin\phi - 1)= 0$$
Equation of a curve having two loops.
When $\phi = 0$ then,
$$\frac{x^2}{a^2} + \frac{ay^2}{b^2}\cdot(\frac{y^2}{b^2} - 1) = 0$$
It will be display the figure of eight.
![[Screenshot 2025-07-07 at 2.09.22 AM.png]]

Example: In a microwave oven, the food moves in a "figure-eight" motion. This happens because when the microwaves reflect off the boundaries (walls), they interfere with each other and form standing waves. As a result, some regions become "dead spots"—areas where the waves cancel out and food doesn't heat properly. To ensure even heating, the plate moves in a figure-eight pattern to distribute the microwaves more uniformly over the food. This same concept of wave superposition and interference is important in designing auditoriums as well, to avoid dead spots in sound and ensure even sound distribution.

If $\phi = \frac{\pi}{2}$, then
$$y^2 = - \frac{b^2}{2a}(x - a)$$
It's a equation of parabola.
![[Screenshot 2025-07-07 at 2.12.18 AM.png]]


### Summary :

$$\frac{d^2t}{dt^2}+\omega^2 y =0$$
The only force we consider here is restoring force others were neglected.

$$y = asin(\omega t + \phi)$$

**LC circuit SHM :** If a harmonic oscillator oscillates in a damping medium will be face two types of force.
- Restoring force                        ---> $F_r \propto x$
- Damping frictional forces      ---> $F_d \propto \frac{dy}{dt}$
	- $\frac{dy}{dt}$ = velocity for low speed

The equation of motion of a damped oscillator,
$$m\frac{d^2y}{dt^2} + b\frac{dy}{dt}+ay = 0$$
$$\Rightarrow \frac{d^2y}{dt^2} + \frac{b}{m}\cdot \frac{dy}{dt}+ \frac{a}{m}\cdot y = 0$$
$$\frac{d^2y}{dt^2} + 2\lambda \frac{dy}{dt} + \omega^2y = 0$$
Here, $2\lambda = \frac{b}{m}$ and $\omega = \sqrt{\frac{a}{m}}$
$\lambda$ = damping factor










