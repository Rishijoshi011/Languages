// package LAB2;
import java.util.Scanner;

public class Avg {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of an Array");
        int size = sc.nextInt();

        int[] arr = new int[size];
        float avg = 0;
        System.out.println("Enter Elements: ");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
            avg += arr[i];
        }
        System.out.println("Avg: " + (avg / size));
        sc.close();
    }
}
