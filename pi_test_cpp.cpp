#include <chrono>
#include <iostream>
using namespace std;
class Timer
{
private:
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;
	
	std::chrono::time_point<clock_t> m_beg;
 
public:
	Timer() : m_beg(clock_t::now())
	{
	}
	
	void reset()
	{
		m_beg = clock_t::now();
	}
	
	double elapsed() const
	{
		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
	}
};
void fib(){
        float pi {0};
        float n = {4};
        float d = {1};
        float a;
        Timer t;
        for (int i = 1; i < 100000000; i++){
         a=2*(i%2)-1;
         pi+=a*n/d;
         d+=2;
        }
		float time_elapsed = t.elapsed();
        std::cout << "c++'s pi value is: \n" << pi << "\n c++'s time elapsed is: \n" << time_elapsed;
};
int main() {
    fib();
    return 0;
}
