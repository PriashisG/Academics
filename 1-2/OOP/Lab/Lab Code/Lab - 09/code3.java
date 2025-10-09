import java.util.Scanner;

class A{
    private int ax;
    A(int x){
        ax = x;
    }

    class B{
        private int bx;
        B(int y){
            bx = y;
        }
        public int sum(){
            return ax + bx;
        }
    }
}

public class code3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter x & y : ");
        int x = input.nextInt();
        int y = input.nextInt();
        A a = new A(x);
        A.B b = a.new B(y);


        System.out.println("Sum of " + x + " " + y + " = " + b.sum());
    }
}