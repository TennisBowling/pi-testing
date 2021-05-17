#include <ctime>
#include <iostream>
void fib(){
        double pi {0};
        double n {4};
        double d {1};
        double a;
        clock_t start = clock();
        for (int i = 1; i < 100000000; i++){
         a=2*(i%2)-1;
         pi+=a*n/d;
         d+=2;
        }
		clock_t finish = clock();
        double time_elapsed = (finish - start) / static_cast<double>( CLOCKS_PER_SEC );
        std::cout << "c++'s pi value is: \n" << pi << "\n c++'s time elapsed is: \n" << time_elapsed;
};
int main() {
    fib();
    return 0;
}
