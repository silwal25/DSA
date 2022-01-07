#pragma once
#include "./Node.hpp"
#include <iostream>

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
  void append(int data);
  void prepend(int data);
  void insertAt(int data, int position);

  void deleteFirst();
  void deleteLast();
  void deleteAt();
};