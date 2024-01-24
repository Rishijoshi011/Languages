package PRACTICALS;

import java.util.Scanner;

class Test{
    private int m;

    public void setM(int m){
        this.m = m;
    }
    public int getM(){
        return m;
    }
}

public class PRAC_10_this_keyword {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number: ");
        int n = sc.nextInt();

        Test t = new Test();
        t.setM(n);
        System.out.println(t.getM());
    }
}
