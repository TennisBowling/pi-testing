import math, times
var pi, n, d, a: float32
pi = 0'f32
n = 4'f32
d = 1'f32
a = 0'f32

proc fib(): float32 =
    for i in 1'i32 ..< 100000000:
        a = float32(2 * (i mod 2) - 1)
        pi += a * n / d
        d += 2
    return pi
let start = epochTime()
let pi_value = fib()
let time_elapsed = (epochtime() - start).round(2)
stderr.writeLine("Nim's pi value is:")
stderr.writeLine(pi_value)
stderr.writeLine("Nim's time elapsed is:")
stderr.writeLine(time_elapsed)