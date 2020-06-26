#include <iostream>
#include "TodoToday.hpp"

using std::cout;
using std::cin;

void TestingRandomStuff();

int main(int ac, char** av) {
  TestingRandomStuff();
}

void TestingRandomStuff() {
  cout << "hi there\n";
  Task* task = new Task("some task");
  cout << task->name << '\n';
  cout << "wanna complete the task?\n";
  char answer;
  cin >> answer;
  if (answer == 'y') {
    cout << "completed: " << task->name << '\n';
  }
}
