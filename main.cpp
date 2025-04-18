#include "include/array.hpp"
#include <cstdio>

int main(int argc, char *argv[]) {

  Array<int, 5> arr;
  Array<int, 0> emptyArr;

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
}
