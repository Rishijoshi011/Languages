package PRACTICALS;

public class PRAC_7_Wrapper_Class {
    public static void main(String[] args) {

        Integer num = Integer.valueOf(11);
        Character ch = Character.valueOf('R');
        Float fl = Float.valueOf(14.02f);
        Double dou = Double.valueOf(24.54);
        Byte by = Byte.valueOf((byte) 12);
        Short sh = Short.valueOf((short) 13);

        System.out.println("Integer value is: " + num);
        System.out.println("Char value is: " + ch);
        System.out.println("Float value is: " + fl);
        System.out.println("Double value is: " + dou);
        System.out.println("Byte value is: " + by);
        System.out.println("Short value is: " + sh);
    }
}