## speeds
nim:         3.141596794128418   / 0.14 \
c++/g++:     3.14159             / 0.293647 \
c/g++:       3.141593            / 0.297000 \
python/numba 3.141592663589326   / 0.47939372062683105 \
java:        3.141592663589326   / 0.557656588 \
python:      3.141592663589326   / 15.269594192504883 \

all run on a AMD ryzen 5 2600x. \
## rules:
all use their default compiler, no flags (with some exceptions such as to nim) \
c++/c: use `g++` \
java uses `javac` \
python uses `java3` \
nim uses `nim cpp` + a flag, `d:danger` (why a flag when the rules are no flag you say? well nim's no-flag-compiler is more meant for debugging and not production, so for production you use `-d:release` or `-d:danger`.)