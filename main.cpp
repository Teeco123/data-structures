#include "include/array.hpp"
#include <cstdio>

int main(int argc, char *argv[]) {
  printf("Hello world!\n");

  Array<int, 5> arr;

  arr[0] = 1;

  for (int i = 0; i < arr.length(); i++) {
    printf("%i \n", arr[i]);
  }
}
