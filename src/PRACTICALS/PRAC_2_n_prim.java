package PRACTICALS;

import java.util.Scanner;

public class PRAC_2_n_prim {

    static boolean isPrime(int num) {
        if (num == 1 || num == 0) {
            return false;
        }

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter how many other.prime numbers you want to display: ");
        int size = sc.nextInt();

        int n = 1;
        for (int i = 1; n <= size; i++) {
            if (isPrime(i)) {
                System.out.println(i);
                n++;
            }
        }
    }
}