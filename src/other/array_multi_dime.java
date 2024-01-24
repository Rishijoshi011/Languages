package other;

import java.util.Scanner;

public class array_multi_dime {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of row");
        int row = sc.nextInt();

        System.out.println("Enter size of column");
        int col = sc.nextInt();
        int[][] array = new int[row][col];
        int max = 0;

        System.out.println("Enter elements: ");
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                array[i][j] = sc.nextInt();
                if (array[i][j] > max) {
                    max = array[i][j];
                }
            }
        }

        for (int i = 0; i < row; i++){
            System.out.println();
            for (int j = 0; j < col; j++){
                System.out.print(array[i][j] + " ");
            }
        }
        System.out.println("Maximum number is: " + max);
    }
}
