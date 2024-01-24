package PRACTICALS;

import java.util.Scanner;

abstract class shape{
    abstract float area();
    Scanner sc = new Scanner(System.in);
}

class Triangle extends shape{
    float area() {
        System.out.println("Enter Height and Base: ");
        float height = sc.nextFloat();
        float base = sc.nextFloat();
        return((base * height) / 2.0f);
    }
}

class Rectangle extends shape{
    float area() {
        System.out.println("Enter Length and Width: ");
        float length = sc.nextFloat();
        float width = sc.nextFloat();
        return (length * width);
    }
}

class Circle extends shape{
    float area() {
        System.out.println("Enter Radius: ");
        float radius = sc.nextFloat();
        return (float) (Math.PI * radius * radius);
    }
}

public class Prac_21 {
    public static void main(String[] args) {
    Triangle tri = new Triangle();
    Rectangle rec = new Rectangle();
    Circle cir = new Circle();

    System.out.println("Area of Triangle: " +  tri.area());
    System.out.println("Area of Rectangle: " +  rec.area());
    System.out.println("Area of Circle: " +  cir.area());
    }
}
