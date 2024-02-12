import java.util.Scanner;

class A3 {
    void hello(String str){
        System.out.println("Hello From A: " + str);
    }
}

public class B3 extends A3{
    void hello(String str){
        super.hello(str);
        System.out.println("Hello From B: " + str);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter any String");
        String str = sc.nextLine();
        A3 a = new B3();
        a.hello(str);

        System.out.println("Enter any String");
        String str2 = sc.nextLine();
        a = new A3();
        a.hello(str2);

        sc.close();
    }
}
