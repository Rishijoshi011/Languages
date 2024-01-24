package other;

import java.util.Scanner;

public class sum_of_array_el {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of array: ");
        int size = sc.nextInt();
        int[] array = new int[size];
        int sum = 0;

        System.out.println("Enter elements: ");
        for (int i = 0; i < array.length; i++){
            array[i] = sc.nextInt();
            sum += array[i];
        }
        System.out.println("Maximum number is: " + sum);
    }
}