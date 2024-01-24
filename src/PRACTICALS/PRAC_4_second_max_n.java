package PRACTICALS;

import java.util.Scanner;

public class PRAC_4_second_max_n {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int max = -1, s_max = -1;

        System.out.println("How many numbers you want to Compare");
        int size = sc.nextInt();

        System.out.println("Enter numbers: ");
        for (int i = 0; i < size; i++){
            int temp = sc.nextInt();
            if (temp > max && temp > s_max) {
                s_max = max;
                max = temp;
            }
            else if (temp > s_max && temp < max) {
                s_max = temp;
            }
        }
        System.out.println("Second maximum number is: " + s_max);
    }
}