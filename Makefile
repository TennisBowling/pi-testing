all:
	sudo apt-get update
	sudo apt-get install default-jre default-jdk nim g++ python3 -y
cpp: pi_test_cpp.cpp
	g++ pi_test_cpp.cpp
	./a.out
	sudo rm -rf a.out
c: pi_test_c.c
	g++ pi_test_c.c
	./a.out
	sudo rm -rf a.out
java: pi_test_java.java
	javac pi_test_java.java
	java pi_test_java
	sudo rm -rf pi_test_java.class
nim: pi_test_nim.nim
	nim cpp -d:danger pi_test_nim.nim
	./pi_test_nim
	sudo rm -rf pi_test_nim
python: pi_test_nim.py
	python3 pi_test_python.py
