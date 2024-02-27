import java.util.Scanner;

public class Shape{
    double area(double radius) { // ! area of Circle
        return Math.PI * radius * radius;
    }

    double area(double length, double height) { // ! area of Triangle
        return ((length * height) / 2);
    }

    double area(float length, float width) { // ! area of Reactangle
        return length * width;
    }

    double area(float radius) { // ! area of Sphere
        return 4 * Math.PI * radius * radius;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Shape sp = new Shape();
        
        System.out.print("Enter radius: ");
        double radius = sc.nextDouble();
        System.out.print("Enter length: ");
        double length = sc.nextDouble();
        System.out.print("Enter width: ");
        double width = sc.nextDouble();

        System.out.println("Area of Circle is: " + String.format("%.4f", sp.area(radius)));
        System.out.println("Area of Triangle is: " + sp.area(length, width));
        System.out.println("Area of Reactangle is: " + sp.area((float) length, (float) width));
        System.out.println("Area of Sphere is: " + String.format("%.4f", sp.area((float) radius)));
        
        sc.close();
    }
}
