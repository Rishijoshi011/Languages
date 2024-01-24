package other;

import java.util.Scanner;

public class second_max_three{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int s_max = 0;

        System.out.println("Enter a number: ");
        int a = sc.nextInt();

        System.out.println("Enter a number: ");
        int b = sc.nextInt();

        System.out.println("Enter a number: ");
        int c = sc.nextInt();

            if (a > b) {
                if (a < c) {
                    s_max = a;
                }
            } else if (a > c) {
                if (a < b) {
                    s_max = a;
                }
            }
            else if (b > a) {
                if (b < c) {
                    s_max = b;
                }
            } else if (b > c) {
                if (b < a) {
                    s_max = b;
                }
            }else if (c > a) {
                if (c < b) {
                    s_max = c;
                }
            } else if (c > b) {
                if (c < a) {
                    s_max = c;
                }
            }
            System.out.println("Second maximum number is: " + s_max);
        }
    }