.SUFFIXES:
.SUFFIXES: .cpp .o
.PHONY:default
.PHONY:workspace
.PHONY:run
.PHONY:valgrind
.PHONY:todotoday

BUILD = build
INC = $(BUILD)/include 
TDT = src/cpp

cli:
	@g++ -I $(TDT) $(TDT)/*.cpp src/cli/main.cpp -o build/todotoday  

test:
	@g++ -I$(TDT) $(TDT)/*.cpp tests/tests.cpp -o build/tests
	@./build/tests

run: default 
	@./build/todotoday

valgrind: test
	@valgrind build/tests

workspace:
