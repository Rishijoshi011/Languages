package other;

import java.io.*;

public class file {
    public static void main(String[] args) {
        try {
            File file = new File("F:/File_io/demo.txt");
            if (!file.exists()) {
                file.createNewFile();
                System.out.println("File created Successfully.");
            }
            FileOutputStream fout=new FileOutputStream("F:/File_io/demo.txt");
            String s="Hellllo There!!";
            byte[] b =s.getBytes();
            fout.write(b);
            fout.close();
            System.out.println("Writing Complete!");
            FileInputStream fin = new FileInputStream("F:/File_io/demo.txt");
            int i;
            while((i=fin.read())!=-1) {
                System.out.print((char)i);
            }
            fin.close();
            fout=new FileOutputStream("F:/File_io/demo.txt");
            s="Hey There!! amigo";
            b=s.getBytes();
            fout.write(b);
            fout.close();
            System.out.println("\n Modification Complete!");
            fin = new FileInputStream("F:/File_io/demo.txt");
            while((i=fin.read())!=-1) {
                System.out.print((char)i);
            }
            fin.close();
        }
        catch (IOException e)
        {
            System.out.println("I/O Exception occurred.");
        }
    }
}