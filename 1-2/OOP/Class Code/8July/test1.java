import java.util.Scanner;

public class test1 {
    public static void main(String[] args) {
        System.out.println("Welcome to CSE Java.\n");
        Scanner input = new Scanner(System.in);
        int a, b, c;
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        System.out.println(a + " + " + b + " + " + c + " = " + (a + b + c));
    }
}
