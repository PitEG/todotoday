# src/cpp makefile
.PHONY:clean

OBJ = TodoToday.o 

$(OBJ): *.cpp *.hpp
	@echo building TodoToday
	@g++ -c TodoToday.cpp #compile
	@echo finished TodoToday

clean:
	@rm $(OBJ)
