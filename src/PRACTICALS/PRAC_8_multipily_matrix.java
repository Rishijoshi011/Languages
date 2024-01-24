package PRACTICALS;

public class PRAC_8_multipily_matrix {
    public static void main(String[] args) {
        int[][] matrix = {{-2,1},{0,4}};
        int[][] matrix2 = {{6, 5}, {-7, 1}};
        int[][] sum = new int[2][2];

        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                sum[i][j] = 0;
                for (int k = 0; k < matrix[i].length; k++) {
                    sum[i][j] += matrix[i][k] * matrix2[k][j];
                }
            }
        }
        for (int i = 0; i < matrix.length; i++) {
            System.out.println();
            for (int j = 0; j < matrix[i].length; j++) {
                System.out.print(sum[i][j] + " ");
            }
            System.out.println();
        }
    }
}
