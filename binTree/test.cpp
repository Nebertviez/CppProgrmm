#include <iostream>
#include "tree.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
  Tree<std::string> tr("Georg");
  tr.add("Herosin");
  tr.add("Labour");
  tr.add("Lolko");
  tr.add("Zohan");
  tr.add("Lisho");
  tr.postorderPrint();
  std::cout << std::endl;
  tr.inorderPrint();
  std::cout.setf(std::ios_base::boolalpha);
  std::cout << tr.size() << std::endl;
  std::cout << tr.contains("hllo") << std::endl;
  std::cout << tr.contains("Lisho") << std::endl;
  std::cout << tr[0] << std::endl;
  return 0;
}
