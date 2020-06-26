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
    std::vector<Task> Tasks();

    //
    // CONSTRUCTORS
    //
    TaskList();
    TaskList(std::vector<Task> tasks);

    //
    // PUBLIC METHODS
    //
    void Add(Task task, int idx);
    void Remove(int idx);
    void Remove(std::string name);
    void Complete(int idx);

  private:
    // PRIVATE MEMBER FIELDS
    std::list<Task> tasks;

};

