package PRACTICALS;

class Thread_demo2 extends Thread{
    String name;
    Thread_demo2(String name){
        this.name = name;
    }

    @Override
    public void run() {

        if(name.equals("even")) {
            System.out.println("This is Even Thread");
            for (int i = 1; i <= 50; i++){
                if (i % 2 == 0){
                    System.out.print(i + " ");
                }
            }
        } else {
            System.out.println("This is odd thread");
            for (int i = 1; i <= 50; i++) {
                if (i % 2 != 0) {
                    System.out.print(i + " ");
                }
            }
        }
    }
    void show(){ start(); }
}

public class Prac_28 {
    public static void main(String[] args){
        Thread_demo2 td = new Thread_demo2("even");
        td.show();
        Thread_demo2 td2 = new Thread_demo2("odd");
        td2.show();
    }
}