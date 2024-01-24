package PRACTICALS;

class Base{
    int x;

    Base(int x) {
        this.x = x;
    }
}

class Derived extends Base {
    int x;
    Derived(int x, int y) {
        super(x);
        this.x = y;
    }
    public void show(){
        System.out.println("Base class variable: " + super.x);
        System.out.println("Derived class variable: " + x);
    }
}

public class Prac_18 {
    public static void main(String[] args) {
    Derived obj = new Derived(11,80);
    obj.show();
    }
}