package other;

import java.util.Scanner;

public class max_two{
	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);		
		
		System.out.println("Enter a number: ");
		int a = sc.nextInt();
		
		System.out.println("Enter a number: ");
		int b = sc.nextInt();
		
		int max = a > b ? (a):(b);

		System.out.println("Maximum number is: " + max);
			
	}

}