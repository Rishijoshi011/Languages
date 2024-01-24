package PRACTICALS;

interface Sample_base{
    public void show();
}

interface Sample_base2{
    public void show();
    public void greet();
}

class Child implements Sample_base, Sample_base2 {
    @Override
    public void show() {
        System.out.println("Hello from the show method which is inherits from the both interface");
    }
    @Override
    public void greet() {
        System.out.println("Hello from the greet method");
    }
}

public class Prac_22 {
    public static void main(String[] args) {
    Child c1 = new Child();

    c1.show();
    c1.greet();
    }
}
