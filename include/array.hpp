#include <stdexcept>

template <typename T, int initSize> class Array {
private:
  T *array;
  int size;

public:
  Array() : size(initSize) { array = new T[size]; }
  ~Array() { delete[] array; }

  T &operator[](int index) {
    if (index >= initSize) {
      throw std::out_of_range("Index out of bounds");
    }
    return array[index];
  }

  const T &operator[](int index) const {
    if (index >= initSize) {
      throw std::out_of_range("Index out of bounds");
    }
    return array[index];
  }

  int length() const { return initSize; }

  int findIndex(T needle) const {
    for (int i = 0; i < length(); i++) {
      if (array[i] == needle) {
        return i;
      }
    }
    return -1;
  }
};
