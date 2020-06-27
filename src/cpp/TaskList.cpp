#include "TaskList.hpp"

//
// GETTER/SETTERS
//

unsigned int TaskList::Size() {
  return tasks.size();
}

std::vector<Task*> TaskList::Tasks() {
  std::vector<Task*> taskVec(tasks.size());
  std::list<Task*>::iterator it = tasks.begin(); 
  for (int i = 0; i < tasks.size(); i++, it++) {
    taskVec[i] = *it;
  }

  return taskVec;
}

void TaskList::Add(Task* task, unsigned int idx) {
}

void TaskList::Remove(int idx) {
  if (idx >= Size()) {
    return;
  }
  auto it = tasks.begin();
  for (int i = 0; i < idx; i++, it++) {
  }
  tasks.erase(it);
}

void TaskList::Remove(std::string name) {
  auto it = tasks.begin();
  for (int i = 0; i < Size(); i++) {
    if ((*it)->name == name) {
      it = tasks.erase(it);
    }
    else {
      it++;
    }
  }
}

bool TaskList::Completed() {
  auto it = tasks.begin();
  while( it != tasks.end()) {
    if (!(*it)->Completed()) {
      return false;
    }
  }
  return true;
}

//
// CONSTRUCTOR
//
TaskList::TaskList() {
}

TaskList::TaskList(std::vector<Task*> tasks) {
  for (int i = 0; i < tasks.size(); i++) {
    this->tasks.push_back(tasks[i]); 
  }
}

//
// PRIVATE METHODS
//
