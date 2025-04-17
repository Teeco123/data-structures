#include "include/array.hpp"
#include <cstdio>

int main(int argc, char *argv[]) {
  printf("Hello world!\n");

  Array<int, 5> arr;

  for (int i = 0; i < arr.length(); i++) {
    arr[i] = i;
  }

  for (int i = 0; i < arr.length() + 2; i++) {
    printf("%i \n", arr[i]);
  }
}
