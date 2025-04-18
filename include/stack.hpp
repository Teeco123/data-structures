#include <cstddef>

template <typename T> struct Node {
  T value;
  Node<T> *prev = nullptr;
};

template <typename T> class Stack {
private:
  Node<T> *head;
  size_t size;

public:
  Stack() : head(nullptr), size(0) {}
  ~Stack() {}

  size_t length() const { return size; }

  void push(T value) {
    Node<T> *newNode = new Node<T>{value, nullptr};
    size++;
    if (head == nullptr) {
      head = newNode;
      return;
    }
    newNode->prev = head;
    head = newNode;
  }
  T pop() {}

  T peek() const {
    // TODO: Handle better nullptr return
    if (head != nullptr) {
      return head->value;
    }
    return -1;
  }
};
