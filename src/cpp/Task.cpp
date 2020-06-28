#include "Task.hpp"

//
// CONSTRUCTORS 
//
Task::Task(std::string name) :
  name(name), completed(false), dateCompleted({0,0,0}) {
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

void Task::Complete(Date date) {
  this->dateCompleted = date;
}
