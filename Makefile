a: p1.cpp
	g++ p1.cpp -std=c++14 -O2
t: ./a.out
	./a.out
b: p2.cpp
	g++ p2.cpp -std=c++14 -O2
c: p3.cpp
	g++ p3.cpp -std=c++14 -O2
d: p4.cpp
	g++ p4.cpp -std=c++14 -O2
e: p5.cpp
	g++ p5.cpp -std=c++14 -O2
all:
	make A; make B; make C; make D; make E;
clean:
	rm -rf *vscode .DS* *swp;
	cp template.cpp p1.cpp;
	cp template.cpp p2.cpp;
	cp template.cpp p3.cpp;
	cp template.cpp p4.cpp;
	cp template.cpp p5.cpp;
