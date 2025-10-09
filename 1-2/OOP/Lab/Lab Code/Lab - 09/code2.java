import java.util.Scanner;

class Point{
    int x, y;
    Point(int a, int b){
        x = a;
        y = b;
    }
    Point MidPoint(Point other){
        int mid_x = (this.x + other.x) / 2;
        int mid_y = (this.y + other.y) / 2;
        return new Point(mid_x, mid_y);
    }
};

public class code2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter the (x, y) of A : ");
        int Ax = input.nextInt();
        int Ay = input.nextInt();
        Point A = new Point(Ax, Ay);

        System.out.print("Enter the (x, y) of B : ");
        int Bx = input.nextInt();
        int By = input.nextInt();
        Point B = new Point(Bx, By);
        
        Point Mid = A.MidPoint(B);
        System.out.println("Mid Point = " + Mid.x + ", " + Mid.y);
    }
}