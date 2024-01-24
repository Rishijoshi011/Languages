//Write a program in Java to demonstrate the use of 'final' keyword in the
//field declaration. How it is accessed using the objects

package PRACTICALS;

class Final_keyword{
    final int a;

    Final_keyword(int a) {
        this.a = a;
    }
}

public class PRAC_13 {
    public static void main(String[] args){
        Final_keyword fk = new Final_keyword(11);

        System.out.println(fk.a);
    }
}