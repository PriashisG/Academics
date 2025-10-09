# #important 

#defination : Nodal Analysis is a circuit analysis technique using node voltage as the circuit variable.

### Steps to Determine Node Voltage

1. Select a node as the reference node. Assign voltage v1, v2, ... , v_{n-1} to the remaining n-1 nodes. The voltages are referenced with respect to the reference node.
2. Apply KCL to each of the n-1 non-reference nodes. Use Ohm's law to express the branch currents in terms of node voltage.
3. Solve the resulting simultaneous equations to obtain the unknown node voltages.

## Node Analysis with Voltage Sources

- If a voltage source is connected between the reference node and a non-reference node, we simply set the voltage at the non-reference node equal to the voltage of the voltage source.
	![[Screenshot 2024-11-21 at 12.49.42 PM.png]]


$$
v_{1} - 0 = 10V \ \ \Rightarrow v_{1} = 10V
$$


- If the voltage source **(!Current Source)** is connected between two non-reference nodes, the two non-reference nodes from a generalised node or super-node; we apply both KCL & KVL to determine the node voltages. **For this we have to create a circuit where that two non-reference voltage treated as a single voltage node & any resistances directly connected in parallel with the voltage source are not included in that.**
	
	![[Screenshot 2024-11-21 at 1.06.33 PM.png]]
	![[Screenshot 2024-11-21 at 1.06.58 PM.png]]
	
-  Inside the non-reference node, the higher voltage point & lower voltage point are determine by the sign of voltage source. Here the V2 is higher voltage point & V1 is lower voltage point.

	![[Screenshot 2024-11-21 at 1.35.24 PM.png]]
	
	
	$$
	-v_1 - 2 + v_2 = 0 \quad \Rightarrow v_2 - v_1 = 2
	$$

# #practice 

**Question - 01 : Find v & i in the circuit.** 
![[Screenshot 2024-11-21 at 7.09.56 PM.png]]
(Ans : -400mV, 2.8A)

**Question - 02 :**
![[Screenshot 2024-11-21 at 7.31.54 PM.png]]
Ans : $$ v_1 = 26.667V,\ v_2 = 6.667V,\ v_3 = 173.33V,\ v_4 = -46.667V $$
