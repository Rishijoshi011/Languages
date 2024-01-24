package PRACTICALS;

import java.util.Scanner;

class LeapYear{
    public boolean isLeapYear(int year){
        return (year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 == 0);
    }
}
class DisplayYear extends LeapYear{
    public void Display(int year){
        if(!isLeapYear(year)){
            System.out.println( year + " isn't leap year");
        } else {
            System.out.println( year + " is leap year");
        }
    }
}

public class PRAC_16 {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter a Year: ");
    int year = sc.nextInt();

    DisplayYear obj = new DisplayYear();
    obj.Display(year);
    }
}