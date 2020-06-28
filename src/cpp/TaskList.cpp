#include "TaskList.hpp"
//
// GETTER/SETTERS
//

unsigned int TaskList::Size() const {
  return tasks.size();
}

std::vector<Task*> TaskList::Tasks() const {
  std::vector<Task*> taskVec(tasks.size());
  auto it = tasks.begin(); 
  for (int i = 0; i < tasks.size(); i++, it++) {
    taskVec[i] = *it;
  }

  return taskVec;
}

void TaskList::Add(Task* task, unsigned int idx) {
  if (idx > Size()) {
    return;
  }
  auto it = tasks.begin();
  for (int i = 0; i < idx; i++) {
    it++;  
  }
  tasks.insert(it, task);
}

Task* TaskList::Get(unsigned int idx) const {
  if (idx > Size()) {
    return NULL;
  }
  auto it = tasks.begin();
  for (int i = 0; i < idx; i++) {
    it++;
  }
  return *it;
}

void TaskList::Remove(unsigned int idx) {
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
      i--;
    }
    else {
      it++;
    }
  }
}

bool TaskList::Completed() const {
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

/* DESTRUCTOR the deletes all listed tasks
TaskList::~TaskList() {
  auto it = tasks.begin();
  while (it != tasks.end()) {
    delete *it;
  }
}
*/

//
// PRIVATE METHODS
//
