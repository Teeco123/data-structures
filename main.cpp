#include "include/array.hpp"
#include "include/queue.hpp"
#include "include/stack.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Arrays", "[array]") {
  Array<int, 5> array;

  REQUIRE(array.length() == 5);

  SECTION("Array insert") {
    array.insert(69);
    REQUIRE(array.length() == 6);
    REQUIRE(array[0] == 69);
  }

  SECTION("Array insertAt") {
    array.insertAt(69, 2);
    REQUIRE(array.length() == 6);
    REQUIRE(array[2] == 69);
  }

  SECTION("Array push") {
    array.push(69);
    REQUIRE(array.length() == 6);
    REQUIRE(array[5] == 69);
  }

  SECTION("Array findIndex") {
    array.insertAt(69, 2);
    REQUIRE(array.findIndex(69) == 2);
  }

  SECTION("Array pop") {
    array.push(69);
    REQUIRE(array.pop() == 69);
    REQUIRE(array.length() == 5);
  }
}
