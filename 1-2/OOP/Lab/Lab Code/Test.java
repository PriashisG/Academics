class Demo {
    void show() {
        System.out.println("Hello from Demo!");
    }
}
public class Test {
    public static void main(String[] args) {
        new Demo().show();   // object created, method called, then object is lost
    }
}
