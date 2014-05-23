#ifndef STACK_HPP
#define STACK_HPP

class Stack
{
  private:
    int size;
    int* stck;
    int index;
  public:
    Stack(int _size = 0) : size(_size), stck(new int[size]), index() {}
    Stack(const Stack & st);
    ~Stack();

    bool isEmpty() const;
    bool isFull() const;
    int isSize() const;

    void push(int item);
    int pop();

    int& operator[](int i);
    Stack & operator=(const Stack & st);
};

#endif
