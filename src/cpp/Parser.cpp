#include "Parser.hpp"

TodoToday* Parser::ReadTodoToday(std::string path) {
  std::ifstream fs;
  fs.open(path, std::ifstream::in);
  TodoToday* todotoday = new TodoToday();
  while (!fs.eof()) {
    std::string goalStr;
    while (fs.peek() != '}') {
      goalStr += ReadLine(fs);
    }
    Goal* newGoal = CreateGoal(goalStr);
    todotoday.Add(newGoal);
  }
    
  fs.close();
  return todotoday;
}

Goal* Parser::CreateGoal(std::string goalString) {
  std::string name =    
}

void Parser::WriteTodoToday(TodoToday* todotoday, std::string path) {
}

std::string Parser::ReadLine(std::ifstream & fs) {
  char c = fs.get();
  std::string line = "";
  line += c;
  while (c != '\n') {
    line += c;
    c = fs.get();
  }
  return line;
}
