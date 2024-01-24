package PRACTICALS;

class Thread_demo extends Thread{
    String name;
    Thread_demo(String name){
        this.name = name;
    }

    @Override
    public void run() {
        if(name.equals("Thread1")) {
            System.out.println("This is Thread one");
            try {
                Thread.sleep(2000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        } else {
            System.out.println("This is Thread two");
            try {
                Thread.sleep(4000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }
    }
    void show(){
        start();
    }
}

public class Prac_27 {
    public static void main(String[] args){
        Thread_demo td = new Thread_demo("Thread1");
        td.show();
        Thread_demo td2 = new Thread_demo("Thread2");
        td2.show();
    }
}