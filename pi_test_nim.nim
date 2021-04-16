import math, times
var pi, n, d, a: float
pi = 0
n = 4
d = 1
a = 0

proc fib(): float =
    for i in 1 ..< 100000000:
        a = float(2 * (i mod 2) - 1)
        pi += a * n / d
        d += 2
    return pi
let start = epochTime()
let pi_val = fib()
let elapsed = (epochtime() - start).round(2)
stderr.writeLine(pi_val)
stderr.writeLine(elapsed)