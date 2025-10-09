**Problem Statement:** Write java programs to do the following.

**Source Code :**
```java
import java.util.Arrays;
import java.util.Scanner;

public class code1 {
    public static void main(String[] args) {
        // i.
        System.out.println("Name : Priashis Ghosh.");
        System.out.println("Address : Munnafer Mor, Rajshahi.");
        System.out.println();

        // ii.
        Scanner input = new Scanner(System.in);
        System.out.print("Enter two integer : ");
        int a = input.nextInt();
        int b = input.nextInt();
        System.out.println("a = " + a + " & b = " + b);
        System.out.println();

        // iii.
        int[] arr = new int[10];
        int sum = 0;
        System.out.print("Enter 10 integer : ");
        for (int i = 0; i < 10; i++) {
            arr[i] = input.nextInt();
            sum += arr[i];
        }
        System.out.print("Enter a value to search = ");
        int tar = input.nextInt();
        System.out.println();

        int ind = -1;
        for (int i = 0; i < 10; i++){
            if (arr[i] == tar){
                ind = i + 1;
                break;
            }
        }
        Arrays.sort(arr, 0, 10);

        System.out.println("Largest Number = " + arr[9]);
        System.out.println("Smallest Number = " + arr[0]);
        System.out.println("Avaerage  = " + sum / 10.0);
        if (ind != -1) System.out.println("The value " + tar + " is at position " + ind + ".");
        else System.out.println("The value " + tar + " is not found.");
        System.out.print("The sorted array = ");
        for (int i = 0; i < 10; i++) System.out.print(arr[i] + " ");
        System.out.println();
    }
}
```
Input & Output :
```
Name : Priashis Ghosh.
Address : Munnafer Mor, Rajshahi.

Enter two integer : 10 20
a = 10 & b = 20

Enter 10 integer : 9 4 7 5 8 3 2 10 1 6
Enter a value to search = 5

Largest Number = 10
Smallest Number = 1
Avaerage  = 5.5
The value 5 is at position 4.
The sorted array = 1 2 3 4 5 6 7 8 9 10 
```

**Problem Statement :** Verify that private methods can be used only inside the class but it cannot be used from outside the class.

**Source Code :**
- `code2.java` file :
```java
public class code2 {
    private void msg1(){
        System.out.println("Private Message is working.");
    }
    public void msg2(){
        System.out.println("Private Message is working.");
    }
}	
```
- `code2_extend.java` file :
```java
public class code2_extend {
    public static void main(String[] args) {
        code2 objCode2 = new code2();
 
        // objCode2.msg1();  // error: msg1() has private access in code2 ❌
        objCode2.msg2();     // Shows output ✅
    }
}
```

In Java, private methods can only be used inside the class where they are made. If you try to use them from another class, it will cause an error. This helps keep parts of the code hidden and safe.

**Problem Statement :** Verify that static methods can access static method/member but cannot access to non-static method/member.

Source Code :
```java
public class code3 {
    static int value1 = 100;
    int value2 = 200;

    static void DisplayStaticmsg(){
        cout << "It's a static function."
    }
    void DisplayNonStaticmsg(){
        cout << "It's a non-static function."
    }
    static void test(){
        System.out.println("Static value = " + value1); // Shows output ✅
        DisplayStaticmsg();                             // Shows output ✅

        // error: DisplayNonStaticmsg() has private access in class code2 ❌
        // System.out.println("Non-static value = " + value2);  
        // DisplayNonStaticmsg();   // error: value2 has private access in class code2 ❌
    }
    public static void main(String[] args) {
        test();
    }
}
```

