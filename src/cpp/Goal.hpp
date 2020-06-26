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
    unsigned int Count();
    std::vector Tasks();

    //
    // CONSTRUCTORS
    //
    Goal(std::string name);

    //
    // METHODS
    //

  private:
    TaskList tasks;

};
