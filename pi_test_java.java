import java.util.*;

public class MyClass {
    public static void main(String args[]) {
        double pi = 0;
        double n = 4;
        double d = 1;
        double a;
        long startTime = System.nanoTime();
        for (int i = 1; i < 100000000; i++){
         a=2*(i%2)-1;
         pi+=a*n/d;
         d+=2;
        }
        double endTime = System.nanoTime();
        double duration = (endTime - startTime);
        double seconds = (double)duration / 1_000_000_000.0;
        System.out.println(pi);
        System.out.println(seconds);
    }
}