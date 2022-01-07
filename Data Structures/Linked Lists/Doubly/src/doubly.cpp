#include "../includes/DoublyLinkedList.hpp"

DoublyLinkedList::DoublyLinkedList(int data) : head(nullptr), tail(nullptr), length(0)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = nullptr;
  newNode->prev = nullptr;
  this->head = newNode;
  this->tail = newNode;
  length++;
}

void DoublyLinkedList::print()
{
  Node *currentPtr = new Node();
  while (currentPtr != nullptr)
  {
    std::cout << currentPtr->data << std::endl;
    currentPtr = currentPtr->next;
  }
}