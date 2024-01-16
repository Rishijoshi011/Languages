import java.util.Scanner;

public class Person {
    private String name;
    private int age, salary;
    Person(String name, int age, int salary) {
        this.name = name;
        this.age = age;
        this.salary = salary;
    }
    void Display(){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Salary: " + salary);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Person p1 = new Person("Joey", 30, 2000);
        Person p2 = new Person("Chandler", 32, 7000);
        p1.Display();
        p2.Display();
    }
}
