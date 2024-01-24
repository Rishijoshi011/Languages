package other;

import java.util.Scanner;

public class Palindrom {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String name = new String();
        StringBuilder palindrome = new StringBuilder();
//        String palindrome = new String();

        System.out.println("Enter your name :");
        name = sc.next();

        for (int i = name.length() - 1; i >= 0; i--) {
            // When we use StringBuilder class we can use append method to append string to variable
            palindrome.append(name.charAt(i));
//            palindrome += name.charAt(i);       // using assignment operator to append string to variable
        }

        // we need to use toString() method because StringBuilder class requires toString() method to convert THE
        // MUTABLE SEQUENCE OF CHARACTER TO STRING
//        if(name.toLowerCase().equals(palindrome.toLowerCase()) Anna

        if (name.toLowerCase().equals(palindrome.toString().toLowerCase())){
            System.out.println("Your Name " + name + " is palindrome");
        }
        else {
            System.out.println("Your Name " + name + " isn't palindrome");
        }
    }
}
