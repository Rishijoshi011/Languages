import java.util.Scanner;;

public class Students {
    private int noOfSubjectsRegistered;
    private int[] subjectCode;
    private int[] subjectCredits;
    private int[] gradeObtained;
    private double[] spi;

    Students(int noOfSubjectsRegistered) {
        this.noOfSubjectsRegistered = noOfSubjectsRegistered;
        this.subjectCode = new int[noOfSubjectsRegistered];
        this.subjectCredits = new int[noOfSubjectsRegistered];
        this.gradeObtained = new int[noOfSubjectsRegistered];
        this.spi = new double[noOfSubjectsRegistered];
    }

    void setDetails(int index, int subjectCode, int subjectCredits, int gradeObtained) {
        this.subjectCode[index] = subjectCode;
        this.subjectCredits[index] = subjectCredits;
        this.gradeObtained[index] = gradeObtained;
    }

    void calculateSpi(int index) {
        spi[index] = (gradeObtained[index] * subjectCredits[index]) / 100.0;
    }

    void display(int index) {
        for (int i = 0; i < noOfSubjectsRegistered; i++) {
            calculateSpi(i);
            System.out.println("Subject Code: " + subjectCode[i]);
            System.out.println("Subject Credits: " + subjectCredits[i]);
            System.out.println("Grade Obtained: " + gradeObtained[i]);
            System.out.println("SPI: " + spi[i]);
        }
        double totalSpi = 0;
        for (int i = 0; i < noOfSubjectsRegistered; i++) {
            totalSpi += spi[i];
        }
        double overallSpi = totalSpi / noOfSubjectsRegistered;
        System.out.println("Overall SPI: " + overallSpi);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter how many Students: ");
        int noOfStudents = sc.nextInt();

        Students[] st = new Students[noOfStudents];

        int noOfSubjectsRegistered = 0, subjectCode, subjectCredits, gradeObtained;
        for (int i = 0; i < noOfStudents; i++) {
            System.out.print("Enter no of Subjects for student " + (i + 1) + ": ");
            noOfSubjectsRegistered = sc.nextInt();
            st[i] = new Students(noOfSubjectsRegistered);

            for (int j = 0; j < noOfSubjectsRegistered; j++) {
                System.out.print("Enter Subject Code for student " + (i + 1) + " for subject " + (j + 1) + ": ");
                subjectCode = sc.nextInt();

                System.out.print("Enter Subject Credits for student " + (i + 1) + " for subject " + (j + 1) + ": ");
                subjectCredits = sc.nextInt();

                System.out.print("Enter Grade Obtained for student " + (i + 1) + " for subject " + (j + 1) + " (0 - 100): ");
                gradeObtained = sc.nextInt();

                st[i].setDetails(j, subjectCode, subjectCredits, gradeObtained);
            }
        }

        for (int i = 0; i < noOfStudents; i++) {
            st[i].display(i);
        }

        sc.close();
    }
}
