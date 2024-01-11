import java.util.Scanner;

public class Prac_3 {
    static int isGreatest(int num, int num2, int num3){
       return (num > num2) ? ((num > num3) ? num : num3) : ((num2 > num3) ? num2 : num3);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 

        System.out.println("Enter Three numbers:");
        int num = sc.nextInt();
        int num2 = sc.nextInt();
        int num3 = sc.nextInt();

       // Using nested if
        if (num > num2) {
            if (num > num3) {
                System.out.println(num + ": is Greatest");
            } else {
                System.out.println(num3 + ": is Greatest");
            }
        } else {
            if(num2 > num3) {
                System.out.println(num2 + ": is Greatest");
            } else {
                System.out.println(num3 + ": is Greatest");
            }
        }
        // using ternery
        
        System.out.println(isGreatest(num, num2, num3) + ": is Greatest Number");
    
    }
}
