package PRACTICALS;

import java.util.Scanner;

public class PRAC_3__max_three {
	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);		
		
		System.out.println("Enter a number: ");
		int a = sc.nextInt();
		
		System.out.println("Enter a number: ");
		int b = sc.nextInt();
		
		System.out.println("Enter a number: ");
		int c = sc.nextInt();		

		int max = (a > b) ? (a > c ? (a):(c)) : (b > c ? (b) : (c));

		System.out.println("Maximum number is: " + max);
			
	}

}