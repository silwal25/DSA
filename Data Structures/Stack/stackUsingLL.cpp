/**
 * @file stackUsingLL.cpp
 * @author Lalit Silwal (you@domain.com)
 * @brief implementation of stacks using LL
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * There are two ways to insert an element in an linked list
 * - At the head
 * - At the tail
 * 
 * Inserting an element at the end will be very costly because we will have to traverse the whole list to push or pop an element
 * So we will perform the push and pop operations at the beginning
 */

#include <iostream>

// Node class
class Node
{
public:
  int data;
  Node *next;
};
Node *top = nullptr;

void push(int x)
{
  Node *newNode = new Node();
  newNode->data = x;
  newNode->next = top;
  top = newNode;
}

void pop()
{
  Node *newNode = new Node();
  if (top == nullptr)
    return;
  newNode = top;
  top = top->next;
  delete (newNode);
}

main(int argc, char const *argv[])
{
  /* code */
  return 0;
}
