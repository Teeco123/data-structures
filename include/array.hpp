template <typename T> class Array {
private:
  T *data;
  int size;

public:
  Array(int initSize) : size(initSize) { data = new T[size]; }
  ~Array() { delete[] data; }

  T &operator[](int index) { return data[index]; }

  const T &operator[](int index) const { return data[index]; }
};
