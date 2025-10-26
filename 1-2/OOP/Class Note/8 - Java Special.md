# Singletone
```java
class Singleton{
    private static Singleton instance = null;
    private Singleton(){}
    public static Singleton getInstance(){
        if (instance == null){
            instance = new Singleton();
        }
        return instance;
    }
    public void show(){
        System.out.println("Singletos Show");
    }
}

public class code{
    public static void main(String[] args) {
        Singleton single1 = Singleton.getInstance();
        single1.show();
        Singleton single2 = Singleton.getInstance();
        if (single1 == single2){
            System.out.println("Both are same.");
        }
    }
}
```
**Output:**
```
Singletos Show
Both are same.
```

# Multi-Threading 
- One thread:
```java
class MyThread implements Runnable{
    public void run(){
        System.out.println("Thread is running.");
    }
}

public class code{
    public static void main(String[] args) {
        MyThread t = new MyThread();
        Thread th = new Thread(t);
        th.start();
    }
}
```
- Multiple thread
```java
class MyThread implements Runnable{
    public void run(){
        System.out.println("Thread is running.");
    }
}

public class code{
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        MyThread t2 = new MyThread();
        MyThread t3 = new MyThread();
        Thread th1 = new Thread(t1);
        Thread th2 = new Thread(t2);
        Thread th3 = new Thread(t3);
        th1.start();
        th2.start();
        th3.start();
    }
}
```


- **Multitasking** is the running of multiple programs (sets of instructions) in one computer at the same time. Example: Computer OS.
	- Process based --> bad
	- Thread based --> good