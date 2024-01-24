package other;

import java.util.Scanner;

public class jagged_array {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of the row: ");
        int row = sc.nextInt();
        int column = 0;
        int[][] jagged = new int[row][column];

        for (int i = 0; i < jagged.length; i++) {
            jagged[column] = new int[i + 1];
        }

        for (int i = 0; i < jagged.length; i++){
            for (int j = 0; j < jagged[i].length; j++){
                jagged[i][j] = sc.nextInt();
            }
        }

        for (int[] element:jagged) {
            System.out.println(" \n" + element + " \n");
        }
    }
}