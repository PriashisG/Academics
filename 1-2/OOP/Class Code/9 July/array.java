import java.util.Arrays;

public class array {
    public static void main(String[] args) {
        int ax[] = new int[]{10, 70, 30, 90, 50};
        for (int i = 0; i < 5; i++){
            System.out.println(ax[i]);
        }

        Arrays.sort(ax);
        int i = Arrays.binarySearch(ax, 70);
        System.out.println("Index = " + (i));
        System.out.println("Value = " + ax[i]);
    }
}
