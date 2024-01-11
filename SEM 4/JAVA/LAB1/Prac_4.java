import java.util.Scanner;

public class Prac_4 {
    static int fibonacci(int fibo) {
        if (fibo <= 1) {
            return fibo;
        } else {
            return (fibonacci(fibo - 1) + fibonacci(fibo - 2));
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a Number");
        int num = sc.nextInt();

        for (int i = 0; i < num; i++) {
            System.out.print(fibonacci(i) + " ");
        }
    }
}
