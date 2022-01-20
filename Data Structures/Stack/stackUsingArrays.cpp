/**
 * @file main.cpp
 * @author Lalit Silwal (you@domain.com)
 * @brief Simple Array based implementation for stack
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#define MAX_SIZE 101 // defining max size of a stack

int A[MAX_SIZE];
int top = -1;

// function to add elements in the stack using push operation
void push(int x)
{
  if (top == MAX_SIZE - 1)
  {
    std::cout << "Error: Stack overflow \n";
    return;
  }
  A[++top] = x;
}

// function to remove elements in the stack using pop operations
void pop()
{
  if (top == -1)
  {
    std::cout << "Error: No element to pop \n";
    return;
  }
  top--;
}

// function to get the top most element
int getTop()
{
  return A[top];
}

// function to print the stack
void print()
{
  for (int i = 0; i <= top; i++)
  {
    std::cout << A[i] << " ";
  }
  std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
  push(1);
  push(2);
  push(3);
  push(4);
  pop();
  push(5);
  push(6);
  print();
  return 0;
}
