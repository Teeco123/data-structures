#include "../include/queue.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Queues", "[queue]") {
  Queue<int> queue;

  REQUIRE(queue.length() == 0);

  SECTION("Queue enqueue") {
    queue.enqueue(5);
    REQUIRE(queue.length() == 1);
    REQUIRE(queue.peek() == 5);
    queue.enqueue(10);
    REQUIRE(queue.length() == 2);
    REQUIRE(queue.peek() == 5);
  }

  SECTION("Queue deque") {
    REQUIRE(queue.deque() == -1);
    REQUIRE(queue.length() == 0);
    REQUIRE(queue.peek() == -1);

    queue.enqueue(5);
    queue.enqueue(10);
    queue.enqueue(15);

    REQUIRE(queue.deque() == 5);
    REQUIRE(queue.length() == 2);
    REQUIRE(queue.peek() == 10);

    REQUIRE(queue.deque() == 10);
    REQUIRE(queue.length() == 1);
    REQUIRE(queue.peek() == 15);
  }

  SECTION("Queue peek") {
    REQUIRE(queue.peek() == -1);
    queue.enqueue(5);
    REQUIRE(queue.peek() == 5);
    queue.enqueue(10);
    REQUIRE(queue.peek() == 5);
  }
}
