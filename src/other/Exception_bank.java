package other;

import java.util.Scanner;

public class Exception_bank {
    static void sufficient(int account_bal){
        if (account_bal < 500){
            System.out.println("Not Sufficient balance");
        }

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int account_bal = 1000;
        System.out.println("Enter value to withdraw");
        int with = sc.nextInt();
        account_bal = account_bal - with;
        sufficient(account_bal);
        System.out.println("Enter value to withdraw");
        with = sc.nextInt();
        account_bal -= with;
        sufficient(account_bal);
    }
}
