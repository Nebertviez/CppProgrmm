#include "stack.hpp"
#include <iostream>

Stack::Stack(const Stack & st)
{
  this->size = st.size;
  this->index = st.index;
  std::cout << index << " " << size << std::endl;
  this->stck = new int[size];
  if ( index > 0 )
  {
    for ( int i = 0; i < size; ++i )
    {
      this->stck[i] = st.stck[i];
    }
  }
}

Stack::~Stack()
{
  delete[] stck;
}

bool Stack::isEmpty() const
{
  return index == 0;
}

bool Stack::isFull() const
{
  return index == size;
}

int Stack::isSize() const
{
  return size;
}

void Stack::push(int item)
{
  if ( isFull() )
  {
    std::cout << "Error" << std::endl;
    return;
  }
  std::cout << &stck[index] << std::endl;
  stck[index++] = item;
}

int Stack::pop()
{
  if ( isEmpty() )
  {
    std::cout << "Error" << std::endl;
    return 0;
  }
  return stck[--index];
}

int& Stack::operator[](int i)
{
  return stck[i];
}

Stack & Stack::operator=(const Stack & st)
{
  if ( this == &st )
    return *this;
  delete[] stck;
  this->size = st.size;
  this->index = st.index;
  this->stck = new int[size];
  for ( int i = 0; i < size; ++i )
  {
    this->stck[i] = st.stck[i];
  }
  return *this;
}

