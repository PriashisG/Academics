
- Having conductivity in between conductor and insulators.
- **Example :** $\text{Ge, Si, GaAs.}$
- Negative temperature co-efficient.

### Energy-band  Diagram 
![[Screenshot 2025-06-20 at 7.25.55 PM.png]]

### Why $\text{Ge}$ and $\text{Si}$ ??

- **Purification**
	- Both can be refined to extremely high purity levels, essential for reliable semiconductor performance.
- **Alterable characteristics**
	- Their electrical properties are easily tuned by doping to form p-type and n-type materials.
- **Availability**
	- Silicon is abundant and cost-effective; germanium is available as a byproduct of metal refining.


### Covalent bonding of the $\text{Si}$ atom
![[Screenshot 2025-06-20 at 7.31.54 PM.png | 200]]

# Intrinsic Semiconductor

- Semiconductor in its pure form
- Level of purity, $1 : 10000000000$ (one in 10 billion)
- Carriers present in such materials is call intrinsic carriers, due to photo-ionization and thermal-ionization.
- Bonding of atoms strengthen by the sharing of electrons
- Example : $\text{Si,\ Ge}$

# Extrinsic Semiconductor

- Semiconductors subjected to doping process
- Extrinsic semiconductors are of p and n type.
- Examples:
	- **n-type:** $Si$ doped with$\text{ P, As, or Sb}$ (pentavalent, donate electrons).
	- **p-type:** $Si$ doped with $\text{B, Ga, or In}$ (trivalent, create holes).

# Fermi Level & Fermi Energy

**Fermi Level :** The highest energy level that an electron can occupy the absolute zero temperature is known as the Fermi Level. It lies between the valence band and conduction band because at absolute zero temperature, the electrons are all in the lowest energy state

**Fermi Energy :** Fermi Energy is the highest energy level occupied by electrons in a material at absolute zero temperature.

# n-type Semiconductor

- Formed by doping with **pentavalent atoms** $\text{(P, As, Sb)}$.
- Extra electrons act as **majority carriers**.
- Dopants are called **donor atoms**.
- **Carrier concentration** increases (up to $\text{100,000 : 1}$).
- **Donor energy level**: $\text{~0.005 eV (Si), ~0.001 eV (Ge)}$.
- **Fermi level** shifts close to the **conduction band**.
- Material remains **electrically neutral**.
$$\text{n --> positive --> electron --> } e^-$$
![[Screenshot 2025-06-21 at 11.38.33 PM.png|400]]
![[Screenshot 2025-06-21 at 11.41.45 PM.png|400]]

In an **n-type semiconductor**, doping introduces donor levels close to the conduction band. As a result, the **Fermi level shifts upward**, indicating an **increase in electron concentration**, and making conduction easier even at room temperature.
![[Screenshot 2025-06-21 at 11.52.20 PM.png|400]]

$\text{Extra electron → Electron (−)    }$
$\text{Electron → Majority carrier}$
$\text{Hole → Minority carrier}$
$\text{Donor atom − electron → Positive ion}$
$\text{Fermi level → Near conduction band}$

# p-type Semiconductor

- Formed by doping with **trivalent atoms** $\text{(B, Ga, In)}$.
- Creates **holes** as majority carriers by accepting electrons.
- Dopants are called **acceptor atoms**.
- **Carrier concentration** increases up to $\text{100,000 : 1}$.
- **Acceptor energy level**: $\text{~0.005 eV (Si), ~0.001 eV (Ge)}$.
- **Fermi level** shifts close to the **valence band**.
- Material remains **electrically neutral**.
![[Screenshot 2025-06-21 at 11.57.21 PM.png|400]]
![[Screenshot 2025-06-21 at 11.57.58 PM.png|300]]

In a **p-type semiconductor**, doping introduces acceptor levels close to the valence band. As a result, the **Fermi level shifts downward**, indicating an **increase in hole concentration**, and making conduction easier even at room temperature.
![[Screenshot 2025-06-22 at 12.07.14 AM.png|300]]

$\text{Missing electron → Hole (+)}$
$\text{Hole → Majority carrier}$
$\text{Electron → Minority carrier}$
$\text{Acceptor atom + electron → Negative ion}$
$\text{Fermi level → Near valence band}$


# Ideal Diode & Switch

- A two terminal semiconductor device
- Made up of either Ge and Si
- Characteristics similar to an ideal switch
- Conducts current in one direction
- Used as an uncontrolled switch
- Short circuit (closed switch) during conduction
- Open circuit (open switch) during non-conduction
 ![[Screenshot 2025-06-22 at 12.22.57 AM.png|300]]

# p-n Junction 

### 1. No Bias
![[Screenshot 2025-06-22 at 12.25.39 AM.png|300]]
- In no bias condition, net current flow in the diode is zero.
- Near the junction, electrons from n-type diffuse into p-type and recombine with holes.
- This leaves behind uncovered positive ions (in n-side) and negative ions (in p-side).
- These fixed ions form the **depletion region** where free carriers are depleted.
- Free carriers diffuse across the junction, creating a **diffusion current**.
- The ions in the depletion region are **immobile** and do not move.
- Typical built-in voltages:
    - $\text{Ge (Germanium) ≈ 0.3 V}$
    - $\text{Si (Silicon) ≈ 0.7 V}$
- Positive and negative ions in the depletion region create an electric field from positive to negative.
- These immobile ions form a **barrier potential**:
    - $\text{Silicon (Si): ~0.7 V}$
    - $\text{Germanium (Ge): ~0.3 V}$
- Minority carriers in the depletion region (holes in n-type, electrons in p-type) cross the junction due to the barrier potential, creating **drift current**.
- Majority carriers diffusion causes **diffusion current**.
- Under no bias, **drift current** and **diffusion current** are equal and opposite, so the net current is zero.

### 2. Reverse Bias
![[Screenshot 2025-06-22 at 12.51.48 AM.png|300]]

- Current under reverse bias is called **reverse saturation current** $(I_s​)$.
- Applied reverse voltage increases the number of uncovered ions in the depletion region.
- This causes the **depletion region to widen**.
- Widened depletion region creates a larger barrier, **blocking majority carrier flow** (almost zero majority current).
- Minority carriers continue to flow across the junction, producing a small **minority-carrier current** (reverse saturation current).

### 3. Forward Bias
![[Screenshot 2025-06-22 at 12.54.19 AM.png|300]]

- **Forward bias:** p-type connected to positive terminal, n-type connected to negative terminal.
- Depletion region width **reduces**.
- Narrower depletion region allows **large majority carrier flow** across the junction.
- **Result:** significant current flows through the diode.

# Diode Equation & Characteristic
![[Screenshot 2025-06-22 at 12.56.23 AM.png|400]]
$$i_d = I_s(e^{\frac{v_d}{nV_t}} - 1)$$
$$i_d = I_se^{\frac{v_d}{nV_t}} - I_s$$
- Large reverse voltage causes sudden current increase.
- This voltage is called **Breakdown** or **Zener voltage**.
- Diode conducts heavily in reverse beyond this point.

# Avalanche & Zener Mechanism

![[Screenshot 2025-06-22 at 1.01.17 AM.png|500]]

- Increasing reverse voltage increases minority carriers’ velocity and kinetic energy.    
- At breakdown voltage $V_z$​, **impact ionization** occurs—carriers collide with atoms, releasing more carriers.
- This leads to an **avalanche current** and defines the avalanche breakdown region.
- Higher doping lowers $V_z$.
- Below $\text{~5 V}$ reverse voltage, **Zener breakdown** dominates, where a strong electric field generates carriers by breaking atomic bonds.

# Effect of Temperature

![[Screenshot 2025-06-22 at 1.01.57 AM.png| 500]]

# Zener diode

![[Screenshot 2025-06-22 at 1.03.54 AM.png|300]]

- Zener diodes are specially designed diodes.
- It is used as a voltage regulator.
- Act as a protection device
- It is used to establish reference voltage level

### i-v characteristic :

![[Screenshot 2025-06-22 at 1.05.35 AM.png|500]]
- **Forward bias:**
    - Behaves like a normal diode with exponential current increase after the forward voltage $\text{(~0.7 V for Si)}$.
- **Reverse bias:**
    - Very small reverse current until the **Zener breakdown voltage $(V_z)$** is reached.
    - At $V_z$, current increases sharply in reverse direction without damaging the diode.
    - The voltage across the diode remains nearly constant at $V_z$​ despite changes in current.

### State of Operation :
![[Screenshot 2025-06-22 at 1.26.54 AM.png|400]]

- **Forward bias:** conducts current like a normal diode.
- **Reverse bias (below $V_z$​):** blocks current with tiny leakage.
- **At Zener voltage ($V_z$):** conducts heavily in reverse, regulating voltage.
- **Avalanche breakdown:** reverse conduction at higher voltages due to impact ionization.
- **Off state:** blocks current when below forward voltage and $V_z$.


# PIV or PRV :

- **PIV** (Peak Inverse Voltage)
- **PRV** (Peak Reverse Voltage)

**The maximum reverse-bias potential that can be applied before entering the Zener region.**

$$\text{PIV / PRV} < V_{z}$$
Here,
	$V_z$ = The breakdown or zener potential.


# Ideal Vs Practical 

![[Screenshot 2025-06-22 at 9.08.49 PM.png|400]]
![[Screenshot 2025-06-22 at 9.10.11 PM.png|200]]
$$R_F = \frac{V_D}{I_D} = \frac{0V}{I_D} = 0\ohm$$
$$R_R = \frac{V_D}{I_D} = \frac{V_D}{0A}= \infty \ohm$$

# Static resistance of Practical diodes
![[Screenshot 2025-06-22 at 9.13.52 PM.png|200]]
$$R_D = \frac{V_D}{I_D}$$
# Dynamic Resistance of Practical Diodes

![[Screenshot 2025-06-22 at 9.16.00 PM.png|200]]![[Screenshot 2025-06-22 at 9.16.09 PM.png|200]]

$$\frac{d}{dV_D}(I_D) = \frac{d}{dV}[I_s(e^{\frac{kV_D}{T_K}} - 1)]$$
$$\Rightarrow \frac{dI_D}{dV_D}=\frac{k}{T_K}(I_D+I_S)$$
Following a few basic maneuvers of differential calculus. In general, $I_D \gg I_S$ in the vertical slope section of the characteristics and 
$$\frac{dI_D}{dV_D} \cong \frac{k}{T_K}I_D$$
Substituting $\eta = 1$ for $Ge$ and $Si$ in the vertical-rise section of the characteristics, we obtain
$$k = \frac{11600}{\eta} = 11600$$
and at room temperature,
$$T_K = T_C + 273^\circ = 298^\circ$$
so that
$$\frac{k}{T_K} = \frac{11600}{298} \cong 38.93$$
$$\Rightarrow \frac{dV_D}{dI_D} = 38.93I_D$$
$$\Rightarrow \frac{dI_D}{dV_D} \cong \frac{0.026}{I_D}$$
$$\therefore r_d = \frac{26mV}{I_D}$$

# Diode Models
![[Screenshot 2025-06-22 at 9.32.07 PM.png|400]]

# Transition & Diffusion Capacitance

![[Screenshot 2025-06-23 at 12.05.31 AM.png|400]]
The **Transition Capacitance** is the predominant capacitive effect in the **reverse bias** region.

The **Diffusion Capacitance** is the predominant capacitive effect in the **forward bias** region.

# Reverse Recovery Time


![[Screenshot 2025-06-23 at 12.10.32 AM.png|400]]
When a **forward bias diode is switched to reverse bias**, state of carrier changed. This large number of minority carriers result in a large reverse current until the carriers come back to their come back to their original majority state.



