// package LAB3;

import java.util.Arrays;
import java.util.Scanner;

public class SortString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = sc.nextLine();
        int size = str.length();
        int[] arr = new int[size];

        for(int i = 0; i < str.length(); i++){
            arr[i] = (int) str.charAt(i);
        }
        Arrays.sort(arr);

        StringBuilder sortedString = new StringBuilder();
        for (int asciiValue : arr) {
            sortedString.append((char) asciiValue);
        }
        System.out.println("Sorted String: " + sortedString.toString());
        sc.close();
    }
}
