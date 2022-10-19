template <class T>

class Stack {
private:
  T* data;
  int top;
  size_t size;

public:
  bool isEmpty();
  bool isFull();


  void push(const T& val) {
    if (!isFull()) {
      top++;
      data[top] = val;
    }
    else {
      throw;
    }

  }
};
