#include <stdexcept>

template <typename T, int initSize> class Array {
private:
  T *data;
  int size;

public:
  Array() : size(initSize) { data = new T[size]; }
  ~Array() { delete[] data; }

  T &operator[](int index) {
    if (index >= initSize) {
      throw std::out_of_range("Index out of bounds");
    }
    return data[index];
  }

  const T &operator[](int index) const {
    if (index >= initSize) {
      throw std::out_of_range("Index out of bounds");
    }
    return data[index];
  }

  int length() const { return initSize; }
};
