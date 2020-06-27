#include "TodoToday.hpp"
#include <fstream>
#include <iostream>
#include <string>

class Parser {
  public:

    //read a file and create a todotoday 
    static TodoToday* CreateTodoToday(std::ifstream fs);
    //write a todotoday into a file
    static void WriteTodoToday(TodoToday* todotoday, std::ofstream os);

  private:

};
