import java.util.Scanner;

class Employee {
    protected String empName;
    protected String empGender;
    protected int empNo;

    Employee(String empName, String empGender, int empNo) {
        inputData(empName, empGender, empNo);
    }

    private void inputData(String empName, String empGender, int empNo) {
        this.empName = empName;
        this.empGender = empGender;
        this.empNo = empNo;
    }

    void showData() {
        System.out.println("Employee Name: " + empName);
        System.out.println("Employee Gender: " + empGender);
        System.out.println("Employee No: " + empNo);
    }
}

public class SalariedEmployee extends Employee{
    double HRA = 0, DA = 0, empSalary, finalPay;

    SalariedEmployee(String empName, String empGender, int empNo, double empSalary) {
        super(empName, empGender, empNo);
        this.empSalary = empSalary;
    }

    void allownce() {
        if (empGender.equals("female")) {
            System.out.println("inside if");
            HRA = 0.1 * empSalary;
            DA = 0.05 * empSalary;
        } else {
            HRA = 0.09 * empSalary;
            DA = 0.05 * empSalary;
        }
        finalPay = HRA + DA + empSalary;
    }

    void grossSalary() {
        allownce();
        System.out.println("Employee salary: " + finalPay);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Employee name: ");
        String empName = sc.nextLine();
        System.out.println("Enter Employee Gender: ");
        String empGender = sc.nextLine();
        System.out.println("Enter Employee number: ");
        int empNo = sc.nextInt();
        System.out.println("Enter Employee salary: ");
        double empSalary = sc.nextDouble();
        
        SalariedEmployee emp = new SalariedEmployee(empName, empGender, empNo, empSalary);
        emp.showData();
        emp.grossSalary();
        
        sc.close();
    }
}