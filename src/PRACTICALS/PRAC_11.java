package PRACTICALS;

class demo{
    int a, b;

    demo(){
        a = 11;
    }
    demo(demo d){
        System.out.println("Copy constructor called");
        this.a = d.a;
        this.b = d.b;
    }

    public void copy(int a,int b){
        this.a = a;
        this.b = b;
    }

    public void show(){
        System.out.println(a + " " + b);
    }
}

public class PRAC_11 {
    public static void main(String[] args) {
    demo d1 = new demo();

    System.out.println("Value of a: " + d1.a);
    d1.copy(45, 22);

    demo d2 = new demo(d1);

    d1.show();
    d2.show();
    }
}