#include "include/array.hpp"
#include "include/queue.hpp"
#include "include/stack.hpp"
#include <cstdio>

int main(int argc, char *argv[]) {

  Array<int, 5> arr;
  Array<int, 0> emptyArr;

  Queue<int> queue;
  Stack<int> stack;

  printf("5 Int Array\n");
  {
    printf("arr memory: %zu\n", arr.length() * sizeof(int));

    // Print array
    for (int i = 0; i < arr.length(); i++) {
      printf("arr [%i]: %i \n", i, arr[i]);
    }

    // Add items
    printf("\n");
    printf("Add items\n");
    for (int i = 0; i < arr.length(); i++) {
      arr[i] = i;
    }

    printf("arr findIndex: %d\n", arr.findIndex(1));
    printf("arr findIndex: %d\n", arr.findIndex(69));

    // Print array
    for (int i = 0; i < arr.length(); i++) {
      printf("arr [%i]: %i \n", i, arr[i]);
    }

    printf("\n");
    printf("Push\n");
    arr.push(18);
    printf("arr memory: %zu\n", arr.length() * sizeof(int));

    for (int i = 0; i < arr.length(); i++) {
      printf("arr [%i]: %i \n", i, arr[i]);
    }

    printf("\n");
    printf("Pop return: %d\n", arr.pop());

    printf("arr memory: %zu\n", arr.length() * sizeof(int));

    for (int i = 0; i < arr.length(); i++) {
      printf("arr [%i]: %i \n", i, arr[i]);
    }
  }

  printf("\n");
  printf("Queue test\n");
  {
    queue.enqueue(3);
    printf("Current queue: %d\n", queue.peek());
    queue.enqueue(8);
    printf("Current queue: %d\n", queue.peek());
    printf("Deque: %d\n", queue.deque());
    printf("Current queue: %d\n", queue.peek());
    printf("Deque: %d\n", queue.deque());
    printf("Current queue: %d\n", queue.peek());
    printf("Deque: %d\n", queue.deque());
    printf("Current queue: %d\n", queue.peek());
  }

  printf("\n");
  printf("Stack test\n");
  {
    stack.push(3);
    printf("Current stack: %d\n", stack.peek());
    stack.push(8);
    printf("Current stack: %d\n", stack.peek());
    printf("Deque: %d\n", stack.pop());
    printf("Current stack: %d\n", stack.peek());
    printf("Deque: %d\n", stack.pop());
    printf("Current stack: %d\n", stack.peek());
    printf("Deque: %d\n", stack.pop());
    printf("Current stack: %d\n", stack.peek());
  }
}
