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

 T top() {
   if (isEmpty())
     throw std::logic_error("error!!!");
   return data[top];
 }

 T pop() {
   if (isEmpty())
     throw std::logic_error("error!!!");
   val = data[top];
   top--;
     return val;
 }

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
