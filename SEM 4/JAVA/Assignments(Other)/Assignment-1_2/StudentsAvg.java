import java.util.Scanner;

public class StudentsAvg {
    private int[] noOfSubjects;
    private int totalMarks;

    StudentsAvg(int noOfSubjects) {
        this.noOfSubjects = new int[noOfSubjects];
        totalMarks = 0;
    }   

    void setDetails(int index, int marks) {
        this.noOfSubjects[index] = marks;
        totalMarks = (totalMarks + marks);
    }

    void display(int index) {
        for(int i = 0; i < noOfSubjects.length; i++){
            System.out.println( i+1 + ": Marks: " + noOfSubjects[i]);
        }
    }   

    String determineRank() {
        totalMarks /= noOfSubjects.length;
        if(totalMarks >= 80 && totalMarks <= 100) {}
        else if (totalMarks >= 60 && totalMarks <= 79) { return "Honours"; }
        else if (totalMarks >= 50 && totalMarks <= 59) { return "First Division"; }
        else if (totalMarks >= 40 && totalMarks <= 49) { return "Second Division"; }
        else if (totalMarks >= 0 && totalMarks <= 39) { return "Fail"; }
        return " ";
    }

   public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter no of Students: ");
    int noOfStudents = sc.nextInt();
    
    StudentsAvg[] st = new StudentsAvg[noOfStudents];

    for(int i = 0; i < noOfStudents; i++) {
        System.out.print("Enter no of Subjects: ");
        int noOfSubjects = sc.nextInt();

        st[i] = new StudentsAvg(noOfSubjects);

        for(int j = 0; j < noOfSubjects; j++) {
            System.out.print("Enter Marks: ");
            int marks = sc.nextInt();
            
            st[i].setDetails(j, marks);
        }
    }
    
    for(int i = 0; i < noOfStudents; i++){
        System.out.println("  " + i+1 + ") Student's Marks:");
        st[i].display(i);
        System.out.println("The rank is: " + st[i].determineRank()); 
    }
    
    sc.close();
   }
}
