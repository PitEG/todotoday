#include "Goal.hpp"
#include <string>

class TodoToday {
  public:
    //
    // PUBLIC MEMBER FIELDS
    //


    //
    // CONSTRUCTORS 
    //
    TodoToday();
    ~TodoToday();

    //
    // PUBLIC METHODS
    //
    void AddGoal(std::string name);
    void AddGoal(Goal* goal);
    std::string ToString();

  private:
    //
    // PRIVATE MEMBER FIELDS
    //
    std::list<Goal*> goals;
};
