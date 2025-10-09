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
        Arrays.sort(arr);

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


