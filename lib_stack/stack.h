template <class T>

class Stack {
private:
  T* data;
  int top;
  size_t size;

public:
  Stack(int _size) {
    if (_size < 1) {
      throw std::logic_error("error!!!");
    }
    size = _size;
    data = new T[size];
    top = -1;
  }

  T Top() {
    if (isEmpty())
      throw std::logic_error("error!!!");
    return data[top];
  }

  T pop() {
    if (isEmpty())
      throw std::logic_error("error!!!");
    T val = data[top];
    top--;
    return val;
  }

  bool isEmpty() {
    return top == -1;
  }

  bool isFull() {
    return top == size - 1;
  }


  void push(const T& val) {
    if (!isFull()) {
      top++;
      data[top] = val;
    }
    else {
      throw std::logic_error("error");
    }

  }
};
