package other;

import java.io.*;
import java.util.Scanner;

class Account {
    Scanner sc = new Scanner(System.in);
    int accountnumber = 00;
    int balance = 0;
    String first_name;
    String last_name;

    void withdraw_Ammount(int Ammount) {
        if(balance > Ammount && balance > 0){
            balance = balance - Ammount;
        }else {
            System.out.println("Insufficient balance");
        }
    }

    void deposit_Ammount(int Ammount) {
        balance = balance + Ammount;
    }

    void display_balance() {
        System.out.println("Balance: " + balance);
    }

}

public class App extends Account {
    public static void main(String[] args) throws Exception {

        File f = null;
        boolean bool = false;

        try{
            f = new File("app.txt");
            bool = f.createNewFile();
            if(!bool){
                System.out.println("File not created");
            }    FileInputStream fin = new FileInputStream("App.txt");
            int i;
            while(((i=fin.read())!=-1)) {
                System.out.print((char)i);
            }
            System.out.println();
            fin.close();
            System.out.println("\n reading complete \n");
        }
        catch(Exception e){
            System.out.println(e);
        }

        Scanner sc = new Scanner(System.in);
        Account a1 = new Account();
        System.out.println("Enter your account number");
        a1.accountnumber = sc.nextInt();
        System.out.println("Enter you account balance");
        a1.balance = sc.nextInt();

        int choice;
        do {

            System.out.println("Choose 1 for Withdraw");
            System.out.println("Choose 2 for Deposit");
            System.out.println("Choose 3 for Check Balance");
            System.out.println("Choose 4 for EXIT");
            choice = sc.nextInt();
            int amount;
            switch (choice) {
                case 1:
                    System.out.println("How many amount you want to withdraw");
                    amount = sc.nextInt();
                    a1.withdraw_Ammount(amount);
                    break;
                case 2:
                    System.out.println("How many amount you want to Deposit");
                    amount = sc.nextInt();
                    a1.deposit_Ammount(amount);
                    break;
                case 3:
                    a1.display_balance();
                    break;
                case 4:
                    System.out.println("Exiting..................................................");
//                    exit();
                    break;

                default:
                    System.out.println("Something when wrong.........................................");
                    break;
            }
        } while (choice != 4);
        try{
            FileWriter fout = new FileWriter("App.txt");
            String a = "Account no. is: " + a1.accountnumber + "\n";
            String b = "Balance is: " + a1.balance + "\n";
            fout.write(a);
            fout.write(b);
            fout.close();
        }catch(Exception e){
            System.out.println(e);
        }
    }
}