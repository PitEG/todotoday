#include <string>
#include "Date.hpp"

class Task {
  public:
    //
    // MEMBER FIELDS
    //

    //name of task
    std::string name;

    //
    // Constructors
    //
    Task(); 
    Task(std::string name);

    //
    // Methods
    //
    void Complete(int day, int month, int year);
    void Complete(Date date);

    //
    // Getter/Setters
    //
    bool Completed() { return completed; }
    const Date DateCompleted() { return dateCompleted; }
    

  private:
    //
    // MEMBER FIELDS 
    //
    bool completed;
    //date of completion (irrelevant if not completed)
    Date dateCompleted;
};
// endof Task
