#include <cstddef>

template <typename T> struct NodeStack {
  T value;
  NodeStack<T> *prev = nullptr;
};

template <typename T> class Stack {
private:
  NodeStack<T> *head;
  size_t size;

public:
  Stack() : head(nullptr), size(0) {}
  ~Stack() {}

  size_t length() const { return size; }

  void push(T value) {
    NodeStack<T> *newNode = new NodeStack<T>{value, nullptr};
    size++;
    if (head == nullptr) {
      head = newNode;
      return;
    }
    newNode->prev = head;
    head = newNode;
  }
  T pop() {
    // TODO: Handle better nullptr return
    if (head == nullptr) {
      return -1;
    }

    if (size == 0) {
      NodeStack<T> *newNode = head;
      head = nullptr;
      return newNode->value;
    }

    size--;
    NodeStack<T> *newNode = head;
    head = head->prev;
    return newNode->value;
  }

  T peek() const {
    // TODO: Handle better nullptr return
    if (head != nullptr) {
      return head->value;
    }
    return -1;
  }
};
