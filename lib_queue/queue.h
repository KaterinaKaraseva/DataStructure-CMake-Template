template <class T>

class Queue {
private:
  T* data;
  int top;
  int end;
  size_t size;

public:
  Queue(int _size) {
    if (_size < 1) {
      throw std::logic_error("error!!!");
    }
    size = _size;
    data = new T[size];
    top = 0;
    end = -1;
  }

  bool isEmpty() {

  }

  bool isFull() {

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
