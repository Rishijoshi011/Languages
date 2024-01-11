import java.util.Scanner;

public class Prac_2 {
    static boolean isPrimeNumber(int prime) {
        if (prime <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(prime); i++) {
            if (prime % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a Number");
        int num = sc.nextInt();

        if (isPrimeNumber(num)) {
            System.out.println(num + ": Number is Prime");
        } else {
            System.out.println(num + ": Number is not a Prime");
        }
    }
}
