//Develop minimum 4 program based on variation in methods i.e. passing by
//value, passing by reference, returning values and returning objects from
//methods.

package PRACTICALS;

class Variant{
    int a;
    public int passing_value(int a){
        this.a = a;
        return a * a;
    }
    public Variant passing_reference(Variant val){
        a = val.a;
        return val;
    }
}

public class PRAC_14 {
    public static void main(String[] args) {
        Variant v = new Variant();
        Variant v2 = new Variant();
        Variant v3;
        System.out.println("Pass by value: " + v.passing_value(30));
        v3 = v2.passing_reference(v);
        System.out.println("Pass by reference: " + v3.a );
    }
}