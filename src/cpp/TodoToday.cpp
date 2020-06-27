#include "TodoToday.hpp"

//
// PUBLIC METHODS
//
void TodoToday::AddGoal(std::string name) {
  Goal* goal = new Goal(name);
  AddGoal(goal);
}

void TodoToday::AddGoal(Goal* goal) {
  goals.push_back(goal);
}

//
// CONSTRUCTOR
//
TodoToday::TodoToday() {
}

//
// DESTRUCTOR 
//
TodoToday::~TodoToday() { 
  auto it = goals.begin();
  while (it != goals.end()) {
    delete (*it);  
  }
}
