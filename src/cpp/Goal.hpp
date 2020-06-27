#include <string>
#include <list>
#include <vector>
#include "TaskList.hpp"

class Goal {
  public:
    //
    // MEMBER FIELDS
    //
    std::string name;

    //
    // GETTER/SETTERS
    //
    unsigned int NumTasks();
    std::vector<Task*> Tasks();
    bool Completed();

    //
    // CONSTRUCTORS
    //
    Goal(std::string name);
    Goal(std::string name, std::vector<Task*> tasks);

    //
    // METHODS
    //

  private:
    TaskList tasks;
};
