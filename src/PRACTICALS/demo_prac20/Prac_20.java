package PRACTICALS.demo_prac20;

import PRACTICALS.Prac_20_diff_package;
import PRACTICALS.demo_prac20.Prac_20;

public class Prac_20 extends Prac_20_diff_package {
    int x = 12;
    void show(){
//        super.show();
        System.out.println("Variable of overriding class is: " + x);
    }

    public static void main(String[] args){
        Prac_20 obj = new Prac_20();

        obj.show();
    }
}
// you can't access the method in different package because  if you want to use a method that is overriding  then you
// have to make it public if you make it public then error will occur.