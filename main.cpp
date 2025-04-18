#include "include/array.hpp"
#include <cstdio>

int main(int argc, char *argv[]) {
  printf("Hello world!\n");

  Array<int, 5> arr;

  for (int i = 0; i < arr.length(); i++) {
    arr[i] = i;
  }

  for (int i = 0; i < arr.length(); i++) {
    printf("arr [%i]: %i \n", i, arr[i]);
  }

  printf("arr findIndex: %d\n", arr.findIndex(20));

  printf("arr memory: %zu\n", arr.length() * sizeof(int));
}
