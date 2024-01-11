// package LAB3;

import java.util.Scanner;

public class SubString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = sc.nextLine();

        System.out.println("Enter the substring to replace:");
        String oldSubstring = sc.nextLine();

        System.out.println("Enter the new substring:");
        String newSubstring = sc.nextLine();

        String result = str.replace(oldSubstring, newSubstring);

        System.out.println("Original String: " + str);
        System.out.println("Result String: " + result);

        sc.close();
    }
}