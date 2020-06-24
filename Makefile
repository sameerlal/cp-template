A: p1.cpp
	g++ p1.cpp -std=c++14 -O2
t: ./a.out
	./a.out
B: p2.cpp
	g++ p2.cpp -std=c++14 -O2
C: p3.cpp
	g++ p3.cpp -std=c++14 -O2
D: p4.cpp
	g++ p4.cpp -std=c++14 -O2
E: p5.cpp
	g++ p5.cpp -std=c++14 -O2
all:
	make A; make B; make C; make D; make E;
clean:
	rm -rf *vscode .DS* *swp
