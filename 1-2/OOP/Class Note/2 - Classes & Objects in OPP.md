A class is an entity that determines how an object will behave and what the object will contain.
- blueprint or a set of instruction to build a specific type of object.

![[Screenshot 2025-10-25 at 8.31.34 AM.png|500]]

### Setter & Getter
![[Screenshot 2025-10-25 at 8.32.43 AM.png|500]]

### Access Control
- Public
- Private
- Protected

### Constructor
Special class functions which performs initialization of every object.
- name of a constructor function is same as name of class.
- no return type.

### Destructor
A function that runs automatically when an object is destroyed.
- (~) followed by the class name.
- No arguments and no return type for a destructor.
- **Use:** deallocated memory that was allocated for the object by the constructor.

### Class in different file
```cpp
#include <iostream>
#include "reg.h"
```

### Static Data Member
Static data members are class members that are declared using static keywords.
- Only one copy of that member is created for the entire class and is shared by all the objects.
- it is initialized before any object of this class is created, even before the main starts.
- only visible within class, but lifetime is the entire program.
- value must be initialized outside the class.
- the getter function must be static.

### Passing Object as Parameter
![[Screenshot 2025-10-26 at 11.15.53 AM.png|500]]

```cpp
#include <iostream>
using namespace std;

class Ball{
private:
    int s;
public:
    Ball(){}
    Ball(int x){
        s = x;
    }
    void AvgSpeed(Ball *b){
        cout << (s + b->s) / 2;
    }
    int main()
    {
        Ball b1(130), b2(140);
        b1.AvgSpeed(&b2);
        return 0;
    }
}
```

### Object as Function Return
```cpp
#include <iostream>
using namespace std;

class Ball{
private:
    float s;

public:
    Ball(){}
    Ball(int x){
        s = x;
    }
    float GetSpeed(){
        return s;
    }
    Ball AvgSpeed(Ball *b){
        Ball t;
        t.s = s + b->s;
        return t;
    }
    int main(){
        Ball b1(130), b2(140);
        Ball k;
        k = b1.AvgSpeed(&b2);
        cout << k.GetSpeed() / 2;
        return 0;
    }
}
```

### Copy Constructor
A copy constructor is a member function that initializes an object using another object of the same class.
```cpp
#include <iostream>
using namespace std;

class Ball{
private:
    float s;

public:
    Ball(){}
    Ball(int x){
        s = x;
    }
    Ball(Ball &b){  // copy constructor
        s = b.s;
    }
    float GetSpeed(){
        return s;
    }
};

int main(){
    Ball b1(150);
    Ball b2(b1); // copy constructor
    cout << b2.GetSpeed();
}
```

### Const Member Function
- Makes no modification about the data members.
![[Screenshot 2025-10-25 at 9.20.03 AM.png|500]]

- mutable --> changeable
- inmutable --> not changeable.

### Static Member Function
- can contain only static data member.
- can run using: `<classname> :: <static function name>()`

**Non static member function can contain both static and non-static data member.**

### Friend Function
A friend function of a class defined outside that class' scope but it has the right to access all private and protected members of the class.
- friends are not member functions.
```cpp
#include <iostream>
using namespace std;

class test{
    private:
        int n;
    public:
    test(int x){
        n = x;
    }
    friend void show(test *t);
};

void show(test *t){
    cout << "n = " << t->n << '\n';
}

int main(){
    test t(10);
    show(&t);
}
```