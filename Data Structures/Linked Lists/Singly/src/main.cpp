#include "../includes/LinkedList.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
  LinkedList *l1 = new LinkedList(10);
  l1->prepend(20);
  l1->append(30);
  l1->append(40);
  l1->append(50);
  l1->print();
  std::cout << "After deleting \n";
  l1->deleteAt(30);
  l1->print();
  std::cout
      << "The length of the linked list is: " << l1->size() << std::endl;
  return 0;
}
