#include "Task.hpp"

//
// CONSTRUCTORS 
//
Task::Task(std::string name) {
  this->name = name;
}
Task::Task() : name("no name") {
}

//
// METHODS
//
void Task::Complete(int day, int month, int year) {
  completed = true;
  dateCompleted.day = day;
  dateCompleted.month = month;
  dateCompleted.year = year;
}
