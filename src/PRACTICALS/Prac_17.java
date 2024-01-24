// Write an application that illustrates how to access a hidden variable. Class A
//declares a static variable x. The class B extends A and declares an instance
//variable x. display( ) method in B displays both of these variables.

package PRACTICALS;

import java.util.Scanner;

class A{
    static int x;

    public void setX(int x) {
        A.x = x;
    }
}

class B extends A{
    int x;

    public void setX(int x, int y) {
        super.setX(x);
        this.x = y;
    }
    public void display(){
        System.out.println("Variable of A class: " + super.x + "\nVariable of B class: " + x);
    }
}

public class Prac_17 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        B obj = new B();

        System.out.println("Enter a number: ");
        int num = sc.nextInt();
        System.out.println("Enter a number: ");
        int num2 = sc.nextInt();

        obj.setX(num, num2);
        obj.display();
    }
}