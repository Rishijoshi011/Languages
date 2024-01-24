package PRACTICALS;

class base2{
    int a = 11;
    public void show(){
        System.out.println("Hello from base2 " + a);
    }
}

class derived2 extends base2{
    int a = 30;
    public void display(){
        System.out.println("Hello from derived2 " + a);
    }
}

class derived3 extends derived2{
    int a = 50;
    public void greet(){
        System.out.println("Hello from derived3 " + a);
    }
} 

class base3{
    int x = 1;
    public void hello(){
        System.out.println("value of x is: " + x);
    }
}

class derived_he extends base3{
    float x = 2.1f;
    public void hello1(){
        System.out.println("value of x is: " + x);
    }
}

class derived_he2 extends base3{
    float x = 2.2f;
    public void hello2(){
        System.out.println("value of x is: " + x);
    }
}


public class PRAC_15 {
    public static void main(String[] args){
        derived2 de = new derived2();
         de.show();
         de.display();

         derived3 de3 = new derived3();
         de3.show();
         de3.display();
         de3.greet();

        derived_he dh = new derived_he();
        derived_he2 dh2 = new derived_he2();

        dh.hello();
        dh.hello1();

        dh2.hello();
        dh2.hello2();
    }
}