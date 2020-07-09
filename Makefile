a: p1.cpp
	@g++ p1.cpp -std=c++17 -O2
t:
ifneq (,$(wildcard ./a.out))
	@./a.out
else
	@make all; 
	@echo "Ran ./a.out \n"; ./a.out;
endif
b: p2.cpp
	@g++ p2.cpp -std=c++17 -O2
c: p3.cpp
	@g++ p3.cpp -std=c++17 -O2
d: p4.cpp
	@g++ p4.cpp -std=c++17 -O2
e: p5.cpp
	@g++ p5.cpp -std=c++17 -O2
all:
	make a; make b; make c; make d; make e;
at:
	make a; make t;
bt:
	make b; make t;
ct:
	make c; make t;
dt:
	make d; make t;
et:
	make e; make t;
clean:
	@rm -rf *vscode .DS* *swp *.out;
	@cp template.cpp p1.cpp;
	@cp template.cpp p2.cpp;
	@cp template.cpp p3.cpp;
	@cp template.cpp p4.cpp;
	@cp template.cpp p5.cpp;
startup:
	@make clean; code .
setup:
	@make startup;

save:
	@cd saved/ && mkdir $(r) && cp ../p*.cpp $(r) && echo "Saved to saved/$(r) \n"

# push:
# 	cd saved/ && git add . && git commit -m "$(msg)" && git push