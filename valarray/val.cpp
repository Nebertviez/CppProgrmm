#include <iostream>
#include <valarray>

int main()
{
  std::valarray<int> first { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  first *= 100;
  for ( auto x : first )
    std::cout << x << std::endl;

  std::cout << "Min = " << first.min() << std::endl;
  std::cout << "Max = " << first.max() << std::endl;

  return 0;
}
