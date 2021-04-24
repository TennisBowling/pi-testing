import time

def fib():
    pi = 0
    n = 4
    d = 1
    for i in range(1,100000000):
        a=2*(i%2)-1
        pi+=a*n/d
        d+=2
    return pi

if __name__ == "__main__":
    start = time.time()
    pi_value = fib()
    time_elapsed = time.time() - start
    print("Python's pi value is:")
    print(pi_value)
    print("Python's time elapsed is:")
    print(elapsed)