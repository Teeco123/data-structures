#include "include/array.hpp"
#include <cstdio>

int main(int argc, char *argv[]) {
  printf("Hello world!\n");

  Array<int> arr(0);

  arr[0] = 1;

  for (int i = 0; i < 1; i++) {
    printf("%i \n", arr[i]);
  }
}
