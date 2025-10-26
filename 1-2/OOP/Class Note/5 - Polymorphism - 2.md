## Exception Handling
An exception is an unexpected problem that arises during the execution of a program.
- provide a way to transfer control from one part of a program to another.
- $\text{try, catch \& throw}$
- **Example:** trying to access an index of an array which is not exist or divide by zero error at runtime or want to open a file which does not exist etc.

```cpp
#include <iostream>
using namespace std;

int main(){
    int n, d, r;
    cout << "Enter n & d: ";
    cin >> n >> d;

    try{
        if (d == 0){
            throw "This divide error :)\n";
        }
        r = n / d;
        cout << "Division = " << r << '\n';
    }
    catch(char const *ex){
        cout << "Error : " << ex << '\n';
    }
}
```
**Output:**
```
Enter n & d: 9 0 
Error : This divide error :)
```
- here try blocks works first. If any error condition occurs, the throw the error msg string.
- then run the catch block starts. If the msg string throws, then it catch that and print. If no throw occurs, then it print nothing.