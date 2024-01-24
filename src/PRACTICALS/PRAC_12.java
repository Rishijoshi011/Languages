//Write a program in Java to demonstrate the use of private constructor and
//also write a method which will count the number of instances created using
//default constructor only.

package PRACTICALS;

class Java {
    static int a;
    private Java(String name) {
        System.out.println("Hello Mr."  + name + " from private constructor");
    }
    Java(){
        a++;
    }
    public void private_constructor(){
        new Java("Rishi");
    }
    public void show(){
        System.out.println(a + " No of instance created");
    }
}

public class PRAC_12 {
    public static void main(String[] args) {
    Java j = new Java();
    Java j2 = new Java();
    Java j3 = new Java();
    j3.show();
    Java j4 = new Java();
    Java j5 = new Java();
    Java j6 = new Java();
    j6.show();
    j.private_constructor();
    }
}