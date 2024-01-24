package PRACTICALS;

interface P1{
    final int X = 11;
    public void display();
}
interface P2{
    final int Y = 50;
    public void display();

}
interface P12 extends P1,P2{
    final int Z = 90;
    public void display();
}

class Q implements P12{

    public void display() {
        System.out.println("Interface P1: " + X);
        System.out.println("Interface P2: " + Y);
        System.out.println("Interface P12: " + Z);
    }
}

public class Prac_19 {
    public static void main(String[] args) {
    Q obj = new Q();

    obj.display();
    }
}