#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <string>

#include "TodoToday.hpp"

TEST_CASE("Testing Test Suite", "[testing test suite]") {
  Task task("test task");
  REQUIRE(task.Completed() == false);
}

