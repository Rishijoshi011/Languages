package other;

import java.util.Scanner;

public class max_four{
	public static void main(String[] args){
	
		Scanner sc = new Scanner(System.in);		
		
		System.out.println("Enter a number: ");
		int a = sc.nextInt();
		
		System.out.println("Enter a number: ");
		int b = sc.nextInt();
		
		System.out.println("Enter a number: ");
		int c = sc.nextInt();	

		System.out.println("Enter a number: ");
		int d = sc.nextInt();	

		int max = (a > b) ? (a > c ? (a > d ? (a) : (d)):(c > d ? (c) : (d))) : (b > c ? (b > d ? (b) : (d)) : (c > d ? (c) : (d)));

		System.out.println("Maximum number is: " + max);
			
	}

}