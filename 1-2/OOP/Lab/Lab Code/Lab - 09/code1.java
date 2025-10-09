import java.util.ArrayList;
import java.util.Scanner;

public class code1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Integer> number = new ArrayList<Integer>();

        // add() method
        System.out.print("Enter 5 integer to add : ");
        for (int i = 0; i < 5; i++){
            number.add(input.nextInt());
        }

        // get() method
        System.out.print("Enter a vaild index : ");
        int ind = input.nextInt();
        System.out.println("The value of " + ind + "th index = " + number.get(ind - 1));

        // set method
        System.out.print("Enter to set the value & index : ");
        ind = input.nextInt();
        int value = input.nextInt();
        int old_value = number.get(ind - 1);
        number.set(ind - 1, value);
        System.out.println("The old value of " + ind + "th position : " + old_value);
        System.out.println("The new value of " + ind + "th position : " + number.get(ind - 1));

        // remove() method
        System.out.print("Enter the index to remove : ");
        ind = input.nextInt();
        number.remove(ind - 1);
        System.out.println("The value of " + ind + "th is removed.");

        // size() method
        System.out.println("The size of the ArrayList (number) = " + number.size());

        // toString() method
        String s = number.toString();
        System.out.println(s);

        // System.out.println("Number : " + number.toString());

        // sort() method
        number.sort(null);
        System.out.println("After sort() : " + number);

        // clear() method
        number.clear();
        System.out.println("After clear() : " + number);
        
    }
}