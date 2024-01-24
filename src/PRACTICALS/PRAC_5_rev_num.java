package PRACTICALS;

import java.util.Scanner;

public class PRAC_5_rev_num {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number: ");
        int num = scanner.nextInt();
        int reverse = 0;

        while (num != 0) {
            reverse = num % 10;
            num = num / 10;
            System.out.print(reverse);
        }
    }
}
