#include <cstddef>

template <typename T> struct Node {
  T value;
  Node<T> *next = nullptr;
};

template <typename T> class Queue {
private:
  Node<T> *head;
  Node<T> *tail;
  size_t size;

public:
  Queue() {
    head = nullptr;
    tail = nullptr;
    size = 0;
  }
  ~Queue() {}

  size_t length() const { return size; }

  void enqueue(T value) {
    Node<T> *newNode = new Node<T>{value, nullptr};
    size++;
    if (head == nullptr) {
      head = newNode;
    }
    if (tail == nullptr) {
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
  }

  T deque() {
    // TODO: Handle better nullptr return
    if (head == nullptr) {
      return -1;
    }
    size--;

    Node<T> *temp = head;
    T val = temp->value;
    head = head->next;
    temp->next = nullptr;

    if (size == 0) {
      tail = nullptr;
    }

    delete temp;
    return val;
  }

  T peek() const {
    // TODO: Handle better nullptr return
    if (head != nullptr) {
      return head->value;
    }
    return -1;
  }
};
