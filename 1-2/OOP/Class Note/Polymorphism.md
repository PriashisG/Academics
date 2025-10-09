
Polymorphism means **"many forms"** — it allows entities like functions or operators to behave differently based on the context.

It’s a core concept in Object-Oriented Programming (OOP) and comes mainly in two types:
1. **Compile-time polymorphism** (Static polymorphism)
2. **Run-time polymorphism** (Dynamic polymorphism)

# Topics :

- Function Overloading
- Operator Overloading
- Function Overloading
- Polymorphism

# Compile-time Polymorphism :
### Function Overloading 

- **Definition:** Multiple functions with the **same name** but different parameter lists (different number or type of parameters) in the same scope.
- **How it works:** The compiler determines which function to call based on the arguments at compile time.

**Example :**
```cpp
void print(int i) {
	cout << "Integer: " << i << std::endl;
}
void print(double d) {
	cout << "Double: " << d << std::endl;
}
void print(string s) {
	cout << "String: " << s << std::endl;
}

print(5);       // calls print(int)
print(3.14);    // calls print(double)
print("Hi");    // calls print(string)
```

### Operator Overloading 

- **Definition:** Giving new meaning to existing operators (`+`, `-`, `*`, `==`, etc.) so they can work with user-defined types.
- **Purpose:** To make custom types behave like built-in types with operators.

```cpp
class Complex {
public:
    double real, imag;

    Complex(double r, double i) : real(r), imag(i) {}

    // Overload + operator to add two Complex numbers
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }
};

Complex c1(1.0, 2.0);
Complex c2(3.0, 4.0);
Complex c3 = c1 + c2; // Uses overloaded +
```

