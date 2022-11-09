#include <iostream>

class CNode {
  int data;
  CNode* next;

public:
  CNode(int val) {
    data = val;
    next = nullptr;
  }

  void set_next(CNode* note) {
    next = note;
  }

  void print() {
    std::cout << data << "->";
  }

  void GetNext() {
    return;
  }

  bool isEmpty() {
    return head == 0;
  }

  void push_back(int val) {
    if (!isEmpty()) {
      CNode* new_note = new CNode(val);
      tail->next = new_note;
      tail = new_note;
    }
    else {
      head = new_node;
      tait = new_node;
    }
  }

};

class CList{
  CNode* head;
  CNode* tail;
public:
  CList() {
    head = nullptr;
    tail = nullptr;
  }

size_t size(){
  size_t len = 0;
  CNode* head_copy = head;
  while (head_copy != nullptr) {
    head_copy = head_copy->next;
    len++;
  }
  return len;
}

friend class CList;


};
/*pop_front
pop_back
*/