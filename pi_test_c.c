#include <time.h>
#include <stdio.h>

void fib(){
        double pi = 0;
        double n = 4;
        double d = 1;
        double a;
        clock_t begin = clock();
        for (int i = 1; i < 100000000; i++){
         a=2*(i%2)-1;
         pi+=a*n/d;
         d+=2;
        }
        clock_t end = clock();
        double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
        printf("C's pi value is:");
        printf("%lf",pi);
        printf("C's time spent is:");
        printf("%lf",time_spent);

};
int main() {
    fib();
    return 0;
}