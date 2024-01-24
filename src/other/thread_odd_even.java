package other;

class Print{
    static int a = 10;
    synchronized void print(int num,char operation){
        switch (operation){
            case '+':  for (int i = 0; i < num; i++){
                a += 1;
                System.out.print(a + " ");
            }
            case '-':  for (int  = 0; i < num; i++){
                a -= 1;
                System.out.print(a + " ");
            }
        }
    }
}

class Odd extends Thread{
    Print p;
    Odd(Print p){ this.p = p;}
    @Override
    public void run() {
        try {
            p.print(2, '+');
            sleep(4000);
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }
    }
}

class Even extends Thread {
    Print p;
    Even(Print p){ this.p = p;}
    @Override
    public void run() {
        try {
            p.print(0, '-');
            sleep(4000);
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }
    }
}

public class thread_odd_even {
    public static void main(String[] args) {
      Print p = new Print();
      Odd o = new Odd(p);
      Even e = new Even(p);

      o.start();
      e.start();
    }
}
