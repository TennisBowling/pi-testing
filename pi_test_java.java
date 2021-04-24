import java.util.*;

public class pi_test_java {
    public static double fib() {
        double pi = 0;
        double n = 4;
        double d = 1;
        double a;
        for (int i = 1; i < 100000000; i++){
         a=2*(i%2)-1;
         pi+=a*n/d;
         d+=2;
        }
        return pi;
    }
    public static void main(String args[]) {
        long startTime = System.nanoTime();
        double pi = fib();
        double endTime = System.nanoTime();
        double duration = (endTime - startTime);
        double seconds = (double)duration / 1_000_000_000.0;
        System.out.println("Java's pi value is:");
        System.out.println(pi);
        System.out.println("Java's time spent is:");
        System.out.println(seconds);
    }
}