#include <string>
#include <list>
#include <vector>
#include "Task.hpp"

class TaskList {
  public:
    //
    // PUBLIC MEMBER FIELDS
    //
    
    //
    // GETTER/SETTERS
    //
    unsigned int Size();
    std::vector<Task*> Tasks();
    bool Completed();

    //
    // CONSTRUCTORS
    //
    TaskList();
    TaskList(std::vector<Task*> tasks);

    //
    // PUBLIC METHODS
    //
    void Add(Task* task, unsigned int idx);
    void Remove(int idx);
    void Remove(std::string name);

  private:
    // PRIVATE MEMBER FIELDS
    std::list<Task*> tasks;

};

