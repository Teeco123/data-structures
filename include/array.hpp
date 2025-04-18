#include <stdexcept>

template <typename T, size_t initSize> class Array {
private:
  T *array;
  size_t size;

public:
  Array() : size(initSize) { array = new T[size]; }
  ~Array() { delete[] array; }

  T &operator[](size_t index) {
    if (index >= size) {
      throw std::out_of_range("Index out of bounds");
    }
    return array[index];
  }

  const T &operator[](size_t index) const {
    if (index >= size) {
      throw std::out_of_range("Index out of bounds");
    }
    return array[index];
  }

  size_t length() const { return size; }

  int findIndex(T needle) const {
    for (size_t i = 0; i < length(); i++) {
      if (array[i] == needle) {
        return i;
      }
    }
    return -1;
  }
};
