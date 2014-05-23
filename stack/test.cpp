#include "stack.hpp"
#include <iostream>

namespace
{
  int size;
}

int main()
{
  std::cout << "Size: ";
  std::cin >> ::size;
  Stack stn(::size);
  Stack stc(stn);
  
  for ( int i = 0; i < stc.isSize() * 2; ++i )
  {
    if ( i % 2 == 0)
    {
      stc.push(i);
    }
    else
    {
      stn.push(i);
    }
  }

  for ( int i = 0; i < stc.isSize(); ++i )
  {
    std::cout << stc.pop() << std::endl;
  }

  for ( int i = 0; i < stn.isSize(); ++i )
  {
    std::cout << stn.pop() << std::endl;
  }
  return 0;
}
