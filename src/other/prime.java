package other;

import java.util.Scanner;

public class prime {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter a number: ");
		int a = sc.nextInt();

		boolean isprime = false;
		if (a == 0 || a == 1) {
			System.out.println("It's not a other.prime number");
		} else {
			for (int i = 2; i <= a / 2; ++i) {
				if (a % i == 0) {
					System.out.println("It's not a other.prime number");
					isprime = true;
					break;
				}
			}
			if (!isprime) {
				System.out.println("It's a other.prime number");
			}
		}
	}
}