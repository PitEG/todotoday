.PHONY:default
.PHONY:workspace
.PHONY:run
.PHONY:valgrind

OBJ = src/cpp/TodoToday.o
export DEP = ${PWD}/src/cpp
export BUILD = ${PWD}/build

default: 
	@$(MAKE) -C src/cpp/
	@$(MAKE) -C src/cli

test:
	@+$(MAKE) -C src/cpp/
	@+$(MAKE) -C tests/ 

run: default 
	./build/TodoToday

valgrind: test
	valgrind build/TodoToday

workspace:
