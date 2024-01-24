package other;

class demo extends Thread {
    String name;

    demo(String name) {
        this.name = name;
    }

    @Override
    public void run() {
        if (name.equals("Thread1")) {
            System.out.println("This is thread1");
            try {
                sleep(2000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        } else if (name.equals("Thread2")) {
            System.out.println("This is thread2");
            try {
                sleep(4000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        } else {
            System.out.println("kal aana");
        }
    }
    void show(){
        start();
    }
}
public class thread_class_extends {
    public static void main(String[] args) {
        demo a = new demo("Thread1");
        demo b = new demo("Thread2");
        demo c = new demo("Thread3");

        a.show();
        b.show();
        c.show();
    }
}