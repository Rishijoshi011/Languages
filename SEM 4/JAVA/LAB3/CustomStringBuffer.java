import java.util.Scanner;

public class CustomStringBuffer {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        StringBuffer str = new StringBuffer("Good Morning Mr.Haward");
        System.out.println("Enter string to change the string");
        String replacement = sc.nextLine();
        System.out.println("Enter the Position");
        int pos = sc.nextInt();
        str.replace(pos, pos + replacement.length(), replacement);
        System.out.println("After Changes: " + str);
        System.out.println("Reversal: " + str.reverse());
        sc.close();
    }
}
