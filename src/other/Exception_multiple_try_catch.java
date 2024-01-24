package other;

import java.util.Scanner;

public class Exception_multiple_try_catch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of the array");
        int size = sc.nextInt();
        int[] array = new int[size];

        System.out.println("Enter array elements");
        for (int i = 0; i < size; i++){
            array[i] = sc.nextInt();
        }
        try {
            System.out.println("Enter the index where you want to divide");
            int index = sc.nextInt();
            try{
                System.out.println("Enter number to divide: ");
                int num = sc.nextInt();
                System.out.println("Answer is: " + array[index] / num);
            }catch (ArithmeticException e){
                System.out.println("Number can't be divide by Zero\n" + e);
            }
        }catch (ArrayIndexOutOfBoundsException e){
            System.out.println("Array is out of bound\n" + e);
        }
    }
}