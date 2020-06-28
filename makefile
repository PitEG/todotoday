.PHONY:default
.PHONY:workspace
.PHONY:run
.PHONY:valgrind

OBJ = src/cpp/TodoToday.o
export DEP = ${PWD}/src/cpp
export BUILD = ${PWD}/build
TDT = src/cpp

todotoday: 
	@g++ -I$(TDT) $(TDT)/*.cpp src/cli/main.cpp -o build/todotoday  

test:
	@g++ -I$(TDT) $(TDT)/*.cpp tests/tests.cpp -o build/tests
	@./build/tests

run: default 
	@./build/todotoday

valgrind: test
	@valgrind build/tests

workspace:
