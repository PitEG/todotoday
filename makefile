.PHONY:default
.PHONY:workspace
.PHONY:run
.PHONY:valgrind

OBJ = src/cpp/TodoToday.o

default: $(OBJ)
	make -C src/cpp
	make -C src/cli

test:
	make -C src/cpp/
	make -C tests/

run: default 
	./build/TodoToday

valgrind: test
	valgrind build/TodoToday

workspace:
