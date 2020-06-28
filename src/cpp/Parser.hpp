#include "TodoToday.hpp"
#include <fstream>
#include <iostream>
#include <string>

//sort of more than just a parser
class Parser {
  public:

    //read a file and create a todotoday 
    static TodoToday* ReadTodoToday(std::string path);
    //write a todotoday into a file
    static void WriteTodoToday(TodoToday* todotoday, std::string path);

  private:
    //
    // PRIVATE METHODS
    //
    static std::string ReadLine(std::ifstream& fs);

    static Goal* CreateGoal(std::string goalString);
    static TaskList* CreateTaskList(std::string taskListString);
    static Task* CreateTask(std::string taskString);
};
