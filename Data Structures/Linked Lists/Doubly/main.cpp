#include <iostream>

class Node
{
public:
  int data;
  Node *prev;
  Node *next;
};

class DoublyLinkedList
{
private:
  Node *head;
  Node *tail;
  int length;

public:
  DoublyLinkedList(int data);

  int size() { return length; } // returns size of the linked list
  void print();
  void reverse();
  void append(int data);
  void prepend(int data);
  void insert(int data, int position);

  void deleteFirst();
  void deleteLast();
  void deleteAt(int position);
};

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

// Function to append an element to the end of the list
void DoublyLinkedList::append(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = nullptr;
  newNode->prev = this->tail;
  this->tail->next = newNode;
  this->tail = newNode;
  length++;
}

// Funtion to insert a node at the beginning of the list
void DoublyLinkedList::prepend(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = this->head;
  newNode->prev = nullptr;
  this->head->prev = newNode;
  this->head = newNode;
  length++;
}

// Function to insert a node at a particular position
void DoublyLinkedList::insert(int data, int position)
{
  Node *newNode = new Node();
  newNode->data = data;

  // Traverse list
  Node *temp = new Node();
  temp = this->head;
  int i = 1;
  while (temp != nullptr)
  {
    if (i++ == position)
    {
      newNode->next = temp->next;
      newNode->prev = temp;
      temp->next = newNode;
      temp->next->prev = newNode;
      length++;
    }
    else
    {
      temp = temp->next;
    }
    //std::cout << temp->data << std::endl;
  }
  delete (temp);
}

void DoublyLinkedList::deleteFirst()
{
  Node *temp = head;
  head = head->next;
  head->prev = nullptr;
  delete (temp);
  length--;
}

void DoublyLinkedList::deleteLast()
{
  Node *temp = tail;
  tail = tail->prev;
  tail->next = nullptr;
  delete (temp);
  length--;
}

void DoublyLinkedList::deleteAt(int position)
{
  Node *temp = new Node();
  int i = 1;
  temp = head;
  while (temp != nullptr)
  {
    if (i++ == position)
    {
      temp->prev->next = temp->next;
      temp->next->prev = temp->prev;
      free(temp);
      break;
    }
    else
    {
      temp = temp->next;
    }
  }
}

void DoublyLinkedList::print()
{
  Node *currentPtr = new Node();
  currentPtr = this->head;
  while (currentPtr != nullptr)
  {
    std::cout << currentPtr->data << std::endl;
    currentPtr = currentPtr->next;
  }
}

void DoublyLinkedList::reverse()
{
  Node *currentPtr = new Node();
  currentPtr = this->tail;
  while (currentPtr != nullptr)
  {
    std::cout << currentPtr->data << std::endl;
    currentPtr = currentPtr->prev;
  }
}

int main(int argc, char const *argv[])
{
  DoublyLinkedList *l1 = new DoublyLinkedList(10);
  l1->append(20);
  l1->append(30);
  l1->prepend(5);
  l1->insert(25, 3);
  std::cout << "The size of the linked list is: " << l1->size() << std::endl;
  l1->print();
  std::cout << "List after deleting element: \n";
  //l1->deleteFirst();
  //l1->deleteLast();
  //l1->deleteAt(3);
  l1->print();
  l1->reverse();
  return 0;
}
