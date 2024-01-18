import java.util.Scanner;

public class Employee{
	private int empCode, empBasicPay, hra, da, totalPay = 0;
	private String empName, empDesignation;
	
	Employee(int empCode, String empName, String empDesignation, int empBasicPay){
		this.empCode = empCode;
		this.empName = empName;
		this.empDesignation = empDesignation;
		this.empBasicPay = empBasicPay;
	}
	void computePayHRA(){ hra = (10 * empBasicPay) / 100; }
	void computePayDA(){ da = (45 * empBasicPay) / 100; }
	void finalPay() { totalPay = hra + da + empBasicPay; }
	void Display(){
		System.out.println("Employee Name: " + empName);
		System.out.println("Employee Code: " + empCode);
		System.out.println("Employee Designation: " + empDesignation);
		System.out.println("Employee Pay: " + empBasicPay);
		System.out.println("Employee Pay after increment: " + totalPay);
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		int empCode, empBasicPay;
		String empName, empDesignation;
		System.out.println("Enter how many employee data you want to enter");
		int size = sc.nextInt();

		Employee[] emp = new Employee[size]; 
		for(int i = 0; i < size; i++){
			System.out.println("Enter Employee Code: ");
			empCode = sc.nextInt();
			sc.nextLine();
			System.out.println("Enter Employee Name: ");
			empName = sc.nextLine();
			System.out.println("Enter Employee Designation: ");
			empDesignation = sc.nextLine();
			System.out.println("Enter Employee Pay: ");
			empBasicPay = sc.nextInt();


			emp[i] = new Employee(empCode, empName, empDesignation, empBasicPay);
		}
		for(int i = 0; i < size; i++){
			emp[i].computePayDA();
			emp[i].computePayHRA();
			emp[i].finalPay();
		}

		for (Employee employee : emp) {
			employee.Display();
		}

		sc.close();
	}
}