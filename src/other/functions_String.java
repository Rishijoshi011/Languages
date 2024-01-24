package other;

import java.util.Scanner;

public class functions_String {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String name = new String();
        String str = new String();

        System.out.println("Enter a name: ");
        name = sc.next();

        System.out.println(name.toLowerCase());
        System.out.println(name.toUpperCase());
        System.out.println(name.length());

        System.out.println("Enter Something to compare: ");
        str = sc.next();

        System.out.println("Comparing String using .equals:  " + str.equals(name));

        StringBuffer strbuf = new StringBuffer("Rishi");

        System.out.println(strbuf.append(" Joshi"));
        System.out.println(strbuf.reverse());

    }
}
