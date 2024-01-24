package PRACTICALS;

final class Temp{
    final int x = 11;
     int getX() {
        return x;
    }
}
/*
class demo2 extends Temp{
    public void show(){
        System.out.println("Value of x is: " + super.x);
    }
}
*/

public class Prac_23 {
    public static void main(String[] args) {
        Temp d = new Temp();

        System.out.println(d.getX());
    }
}
// final class can't be inherited so demo2 class can't get properties of Temp class