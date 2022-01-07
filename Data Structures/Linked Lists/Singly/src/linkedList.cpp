#include "../includes/LinkedList.hpp"
#include "../includes/Node.hpp"
#include <iostream>

// Constructor to initialize linked list
LinkedList::LinkedList(int data)
    : head(nullptr), tail(nullptr), length(0) // Initializing default values
{
  Node *node = new Node();
  node->data = data;
  node->next = nullptr;
  this->head = node; // assigning head to this node
  this->tail = node;
  length++;
}

// Function to print the linked list
void LinkedList::print()
{
  Node *currentPtr = head;
  while (currentPtr != nullptr)
  {
    std::cout << currentPtr->data << std::endl;
    currentPtr = currentPtr->next;
  }
}

// Insertion function
// Function to prepend the linked list
void LinkedList::prepend(int data)
{
  // assigning new node
  Node *newNode = new Node();
  newNode->next = head;
  newNode->data = data;
  head = newNode;
  length++;
}

// Function to append to the linked list
void LinkedList::append(int data)
{
  // assigning new node
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = nullptr;
  tail->next = newNode; // setting tail pointer to new node
  tail = newNode;       // assigning tail to new node
  length++;
}

// Function to insert at a particular place
void LinkedList::insertAt(int data, int position)
{
  Node *newNode = new Node();
  Node *currentPtr = head;
  int currentPos = 1;
  newNode->data = data;
  while (currentPtr != nullptr && currentPos < position)
  {
    currentPtr = currentPtr->next;
    currentPos++;
  }
  newNode->next = currentPtr->next;
  currentPtr->next = newNode;
  length++;
}

// Deletion function
// Function to delete the first element
void LinkedList::deleteFirst()
{
  Node *temp = head;
  head = head->next;
  delete temp;
}

// Function to delete the last node
void LinkedList::deleteLast()
{
  Node *currentPtr = new Node();
  currentPtr = head;
  while (currentPtr != nullptr)
  {
    if (currentPtr->next == tail)
    {
      currentPtr->next = nullptr;
      delete tail;
      tail = currentPtr;
    }
    else
    {
      currentPtr = currentPtr->next;
    }
  }
}

// Funciton to delete a node at a particular point
void LinkedList::deleteAt(int position)
{
  if (position == 1) // deleting the first element
  {
    deleteFirst();
  }
  else if (position == length) // deleting the last element
  {
    deleteLast();
  }
  else if (position > length) // Entered value is more than the length
  {
    std::cout << "The entered element is not valid. (index position is greater than the length)";
  }
  else if (position < 1) // Entered value is less than the first index
  {
    std::cout << "The position of the element should be atleast 1";
  }
  else
  {
    int currentPos = 1;
    Node *currentPtr = new Node();
    currentPtr = head;
    while (currentPos < position - 1) // traverse the list till one node before
    {
      currentPtr = currentPtr->next;
      currentPos++;
    }
    Node *temp = new Node();
    temp = currentPtr->next->next;
    delete currentPtr->next; // freeing the memory
    currentPtr->next = temp;
    length--;
  }
}