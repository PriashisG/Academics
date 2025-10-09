
# API

**-> Application Programming Inter**

- Library (Pre written code to faster the development process).

# Java Editions

**-> 3 Types of edition.**
- Java Standard Edition (SE)
- Java Enterprise Edition (EE)
- Java Micro Edition (ME)

# Methods

Every Method is written inside a class. A class is a container of methods.

# Naming Convention

- **Pascal Case Convention:** `ThisIsAName`
- **Camel Case Convention:** `thisIsAName`
- **Snake Case Convention:** `this_is_a_name`

# Structure 

**-> Each java program must have a class that contain main() method.**
```java
public class temp {
	public static void main(String[] args) {

	}
}
```

# Package

A container of classes.
![[Screenshot 2025-08-20 at 12.25.17 PM.png|400]]

# Compiling Diagram

![[Screenshot 2025-08-20 at 12.27.06 PM.png|500]]

# Access Modifier

1. **Public:** access from everywhere.
2. **Private:** access only insider the class.
3. **Protected:** access from everywhere.
4. **Default:** access from everywhere.

# Non-access Modifier

**-> Static**
![[Screenshot 2025-08-20 at 12.29.57 PM.png|500]]

# Primitive vs Reference Type

- Primitive $→$ actual value
- Reference $→$ address of an object

# Immutable Objects

- An object whose content can not be changed

# Anonymous Object

- A value that has been created but has no name.

```java
class Demo {
    void show() {
        System.out.println("Hello from Demo!");
    }
}
public class Test {
    public static void main(String[] args) {
        new Demo().show();   // Anonymou object
    }
}
```

# Array class methods

```java
	Arrays.sort(arr);
	int i = Arrays. binarySearch(arr, 4); // if not found returns -ve
	Arrays.fill(arr, fromIndex, toIndex, value);
	System.out.println(Arrays.toString(arr)) // [1, 2, 3]
```

# ArrayList class



