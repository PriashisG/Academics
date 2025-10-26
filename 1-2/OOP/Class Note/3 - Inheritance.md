The mechanism of deriving a new class from an old class written class in known as inheritance.
- Public
- Protected
- Private

### Type of Inheritance
- Single Level Inheritance
- Multi Level Inheritance
- Multiple Inheritance
- Hierarchal Inheritance
![[Screenshot 2025-10-25 at 10.36.45 AM.png|500]]

### Virtual Function
![[Screenshot 2025-10-25 at 11.46.15 AM.png|300]]
When a class inherits from two parent classes that both come from the same base class, an ambiguity occurs.
```cpp
cout << B::x;
cout << C::x;
```
Another solution is to use **virtual** keyword when parent class is created.

