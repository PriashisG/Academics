# #important 

#defination : Mesh Analysis is a circuit analysis technique that uses Kirchhoff’s Voltage Law (KVL) to find the currents flowing in the loops (meshes) of a planar circuit.

## Steps to Determine Mesh Currents

- Assign  mesh current i1, i2, ...., i_n to the n meshes.
- Apply KVL to each of the n meshes. use Ohm's law to express the voltages in terms of the mesh currents.
- Solve the resulting n simultaneous equations to get the mesh currents.

## Mesh Analysis with Current Source

- When a current source exists only one mesh, mesh current can be determined directly. 
	![[Screenshot 2024-11-21 at 3.21.55 PM.png]]
$$
i_2 = -5A
$$

- When a current source exists between two meshes, we create a super-mesh by excluding the current source and any elements connected in series with it.

	![[Screenshot 2024-11-21 at 3.24.04 PM.png]]


# #practice 

**Question - 01 : Using mesh analysis, find Io in the circuit.**
![[Screenshot 2024-11-21 at 9.09.32 PM.png]]
Ans : -4A

