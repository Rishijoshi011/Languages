package other;

import java.util.Scanner;

public class strong_num {
    static int factorial(int fact) {
        int sum = 1;
        while (fact >= 1){
            sum *= fact;
            fact --;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number: ");
        int num = sc.nextInt();
        int n = num, single_digit, sum = 0;

        while(n > 0){
            single_digit = n % 10;
            n = n / 10;
            sum += factorial(single_digit);
        }

        if (sum == num){
            System.out.println(num + " is Strong number");
        } else {
            System.out.println(num + " isn't Strong number");
        }
    }
}
