#pragma once
#include "./Node.hpp"
#include <iostream>

class LinkedList
{
private:
  Node *head;
  Node *tail;
  int length;

public:
  // Constructor for linked list initialization
  LinkedList(int data);

  // Functions for linked list manipulation
  void print();
  int size() { return length; } // To find the size of the linked list
  void countNodes();

  // Insertion
  void append(int data);
  void prepend(int data);
  void insertAt(int data, int position);

  // Deletion
  void deleteFirst();
  void deleteLast();
  void deleteAt(int position);
};