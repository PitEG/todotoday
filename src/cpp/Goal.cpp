#include "Goal.hpp"

//
// GETTER/SETTERS
//
unsigned int Goal::NumTasks() { 
  return tasks.Size();
}
std::vector<Task*> Goal::Tasks() {
  return tasks.Tasks();
}

bool Goal::Completed() {
  return tasks.Completed();
}

//
// CONSTRUCTORS 
//
Goal::Goal(std::string name) : name(name){
}
Goal::Goal(std::string name, std::vector<Task*> tasks) : 
  name(name), tasks(tasks) {
}
