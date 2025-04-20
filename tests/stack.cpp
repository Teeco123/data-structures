
#include "../include/stack.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Stacks", "[stack]") {
  Stack<int> stack;

  REQUIRE(stack.length() == 0);

  SECTION("Stack push") {
    stack.push(5);
    REQUIRE(stack.length() == 1);
    REQUIRE(stack.peek() == 5);
    stack.push(10);
    REQUIRE(stack.length() == 2);
    REQUIRE(stack.peek() == 10);
  }

  SECTION("stack pop") {
    REQUIRE(stack.pop() == -1);
    REQUIRE(stack.length() == 0);
    REQUIRE(stack.peek() == -1);

    stack.push(5);
    stack.push(10);
    stack.push(15);

    REQUIRE(stack.pop() == 15);
    REQUIRE(stack.length() == 2);
    REQUIRE(stack.peek() == 10);

    REQUIRE(stack.pop() == 10);
    REQUIRE(stack.length() == 1);
    REQUIRE(stack.peek() == 5);
  }

  SECTION("stack peek") {
    REQUIRE(stack.peek() == -1);
    stack.push(5);
    REQUIRE(stack.peek() == 5);
    stack.push(10);
    REQUIRE(stack.peek() == 10);
  }
}
