#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <string>
#include <vector>
#include <iostream>

#include "TodoToday.hpp"

using std::cout;
using std::endl;

void Print(std::vector<Task*> vec) {
  cout << '{';
  for(int i = 0; i < vec.size(); i++) {
    cout << vec[i];
    if (i != vec.size() - 1) {
      cout << ",";
    }
  }
  cout << "}\n";
}

TEST_CASE("TodoToday", "[todotoday]") {

  //
  // Tasks
  //
  Task task("test task");
  Task a("a");
  Task b("b");
  Task c("c");
  Task d("d");
  Task e("e");
  Task nn;

  SECTION("Tasks:") {

    SECTION("testing continuity (completed bool) part 1") {
      a.Complete(0,0,0);
      REQUIRE(a.Completed() == true);
    }

    SECTION("testing continuity (completed bool) part 2") {
      REQUIRE(a.Completed() == false);
    }

    SECTION("testing name") {
      REQUIRE(a.name == "a");
      REQUIRE(a.name != b.name);
      REQUIRE(b.name != "c");

      a.name = "b";
      REQUIRE(a.name == b.name);

      REQUIRE(nn.name == "no name");
    }

    SECTION("testing Complete initialization") {
      Date date{0,0,0};
      REQUIRE(date == a.DateCompleted());
    }

    SECTION("testing Complete method") {
      Date date{1,1,2000};
      a.Complete(1,1,2000);
      b.Complete(1,1,2001);
      c.Complete(1,2,2001);
      d.Complete(2,2,2001);
      e.Complete(date);
      REQUIRE(date == a.DateCompleted());
      REQUIRE(date != b.DateCompleted());
      REQUIRE(date != c.DateCompleted());
      REQUIRE(date != d.DateCompleted());
      REQUIRE(date == e.DateCompleted());
    }
  }

  //
  // TaskLists 
  //

  Task* arr1[] = {&a, &b};
  Task* arr2[] = {&c, &d};
  Task* arr3[] = {&e};
  std::vector<Task*> vec1(arr1, arr1 + sizeof(arr1) / sizeof(Task*));
  std::vector<Task*> vec2(arr2, arr2 + sizeof(arr2) / sizeof(Task*));
  std::vector<Task*> vec3(arr3, arr3 + sizeof(arr3) / sizeof(Task*));

  TaskList A(vec1);
  TaskList B(vec2);
  TaskList C(vec3);
  TaskList D;

  SECTION("TaskLists:") {
    SECTION("testing size getter") {
      REQUIRE(A.Size() == 2);
      REQUIRE(B.Size() == 2);
      REQUIRE(C.Size() == 1);
      REQUIRE(D.Size() == 0);
    }

    SECTION("testing task list getter") {
      REQUIRE(A.Tasks().size() == 2);
      REQUIRE(B.Tasks().size() == 2);
      REQUIRE(C.Tasks().size() == 1);
      REQUIRE(D.Tasks().size() == 0);

      for(int i = 0; i < 2; i++) {
        REQUIRE(A.Tasks()[i] == arr1[i]);
        REQUIRE(B.Tasks()[i] == arr2[i]);
      }
      REQUIRE(C.Tasks()[0] == arr3[0]);
    }

    SECTION("testing add") {
      A.Add(&b,0);
      REQUIRE(A.Tasks()[0] == &b);
      REQUIRE(A.Size() == 3);
      A.Add(&e,3);
      REQUIRE(A.Tasks()[3] == &e);
      A.Add(&e,1);
      REQUIRE(A.Tasks()[1] == &e);
      
      REQUIRE(A.Size() == 5);
      A.Add(&e,10);
      REQUIRE(A.Size() == 5);
    }

    SECTION("testing remove") {
      B.Remove(0);
      REQUIRE(B.Size() == 1);
      REQUIRE(B.Tasks()[0] == &d);
      B.Remove(1);
      REQUIRE(B.Size() == 1);
      REQUIRE(B.Tasks()[0] == &d);

      B.Remove("d");
      REQUIRE(B.Size() == 0);

      //Print(A.Tasks());
      A.Add(&a,A.Size());
      REQUIRE(A.Size() == 3);
      //Print(A.Tasks());
      A.Remove("a");
      //Print(A.Tasks());
      REQUIRE(A.Size() == 1);
    }
  }

  SECTION("Testing Goals:") {
    //So far it's just a very shallow encapsulation of TaskList... 
    //which is also just a wrapper. Why do I do this.


  }
}
