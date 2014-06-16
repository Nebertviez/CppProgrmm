#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>

template<typename T> class Stack;
template<typename T> std::ostream& operator<< (std::ostream&, const Stack<T>&);

template<class T>
class Stack
{
    private:
        int size;
        int index{};
        T* stack;
    public:
        Stack(int _size) : size(_size), stack(new T[size]) {}
        ~Stack() { delete[] stack; }

        bool isEmpty() const;
        bool isFull() const;

        void push(T value);
        T pop();

        int getSize() const;

        friend std::ostream& operator<< <T>(std::ostream&, const Stack<T>&);
};
#endif

template<typename T>
bool Stack<T>::isEmpty() const
{
    return index == 0;
}

template<typename T>
bool Stack<T>::isFull() const
{
    return index == size;
}

template<typename T>
void Stack<T>::push(T value)
{
    if (isFull())
    {
        std::cout << "Stack is full" << std::endl;
    }
    stack[index++] = value;
}

template<typename T>
T Stack<T>::pop()
{
    if (isEmpty())
    {
        std::cout << "Stack is empty" << std::endl;
    }
    return stack[--index];
}

template<typename T>
int Stack<T>::getSize() const
{
    return index;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Stack<T>& st)
{
    for ( int i = 0; i < st.getSize(); ++i )
    {
        std::cout << st.stack[i] << std::endl;
    }
    return os;
}
