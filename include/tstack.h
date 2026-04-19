// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
 private:
  T arr[size];
  int top_index;

 public:
  TStack() : top_index(-1) {}

  void push(T value) {
    if (top_index < size - 1) {
      arr[++top_index] = value;
    }
  }

  void pop() {
    if (top_index >= 0) {
      --top_index;
    }
  }

  T get() const {
    if (top_index >= 0) {
      return arr[top_index];
    }
    return T();
  }

  bool isempty() const {
    return top_index == -1;
  }

  int stack_size() const {
    return top_index + 1;
  }
};

#endif  // INCLUDE_TSTACK_H_
