package other;

import java.util.Scanner;

public class Exception_try_catch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number: ");
        int num = sc.nextInt();
        System.out.println("Enter a number: ");
        int num2 = sc.nextInt();

        try {
            System.out.println("Answer is: " + num / num2);
        }catch (Exception e){
            System.out.println("Number can't be divide by Zero\n" + e);
        }
    }
}