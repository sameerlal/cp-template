# Competitive Programming Template
## Summary
The files px.cpp for x=1,2,3.. corresponds to each problem file.  The Makefile supports compiling each problem separately.  Feel free to rename p1.cpp to pa.cpp, but I'm already use to the numbered version so I won't change it.  Then running `make t` will run `./a.out` so you can test against custom input.  Don't forget to run `make clean` before (or after) each competition to reset the workspace.
## Cleaning Workspace 
Clean the workspace before a competition by running:

    make clean
This will remove unnecessary files and reset all problem files to the template. It removes VS code bindings, swp files, and the README.  

## In Competition 
### Compile and Test Separately 
After solving `p1.cpp`, you can compile using `make a`.  This will invoke the g++ compiler with c++17 standard and the -O2 optimization flag.  Codeforces is in the process of supporting 64 bit g++. 
Currently (as of June 24, 2020), Codeforces compiles solutions with

    g++ -static -DONLINE_JUDGE -Wl,--stack=268435456 -O2 -std=c++17 program.cpp

After compiling, run `make t` which will run `./a.out` for custom testing. Next, solve problems B, C, D.. and repeat the same procedure. 

### Compile and Test Together
You can also run:

    make at

This will run 

    make a; make t;



