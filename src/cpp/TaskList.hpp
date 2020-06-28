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
    unsigned int Size() const;
    std::vector<Task*> Tasks() const;
    bool Completed() const;

    //
    // CONSTRUCTORS
    //
    TaskList();
    TaskList(std::vector<Task*> tasks);
    TaskList(TaskList* tasks);
    //~TaskList();

    //
    // PUBLIC METHODS
    //
    void Add(Task* task, unsigned int idx);
    Task* Get(unsigned int idx) const;
    void Remove(unsigned int idx);
    void Remove(std::string name);

  private:
    // PRIVATE MEMBER FIELDS
    std::list<Task*> tasks;

};

