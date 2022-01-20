/**
 * @file usingStacks.cpp
 * @author Lalit Silwal (you@domain.com)
 * @brief Simple queue implementation using arrays
 * @version 0.1
 * @date 2022-01-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#define MAX_SIZE 10

int A[MAX_SIZE];
int front = -1;
int rear = -1;

// Queue operations
void enqueue(int data);
void dequeue();
int getFront();
int getRear();
bool isEmpty();
bool isFull();
void print();

int main(int argc, char const *argv[])
{
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  enqueue(5);
  dequeue();
  enqueue(6);
  enqueue(7);
  dequeue();
  enqueue(8);
  enqueue(9);
  enqueue(10);
  enqueue(11);
  enqueue(12);
  dequeue();
  enqueue(13);
  std::cout << "The front is: " << getFront() << std::endl;
  std::cout << "The rear is: " << getRear() << std::endl;
  std::cout << "Is the queue full? " << isFull() << std::endl;
  print();
  return 0;
}

// Definition of getFront function to fetch the front element
int getFront()
{
  return A[front];
}

// Definition of getRear function to fetch the rear element
int getRear()
{
  return A[rear];
}

// Definition of isEmpty to check whether a queue is empty or not
bool isEmpty()
{
  return (front == -1 && rear == -1) ? true : false;
}

bool isFull()
{
  return ((rear + 1) % MAX_SIZE == front) ? true : false;

  // if (rear == MAX_SIZE - 1 && front == 0)
  //   return true;
  // return false;
}

// Definition of enqueue function
void enqueue(int data)
{
  if (isFull())
  {
    // When the queue is full
    std::cout << "The queue is full" << std::endl;
    return;
  }
  else if (isEmpty())
  {
    // when the queue is empty
    front = 0;
    rear = 0;
    A[rear] = data;
  }
  else
  {
    rear = (rear + 1) % MAX_SIZE;
    A[rear] = data;
  }
  // else if (rear = MAX_SIZE - 1 and front != 0)
  // {
  //   // when the queue is full from the rear but have empty space in front
  //   rear = 0;
  //   A[rear] = data;
  // }
}

// Definition for dequeue funtion

void dequeue()
{
  if (isEmpty())
  {
    std::cout << "The queue is empty!";
    return;
  }
  else if (front == rear)
  {
    std::cout << "The dequeued element is: " << A[front] << std::endl;
    front = -1;
    rear = -1;
  }
  else
  {
    std::cout << "The dequeued element is: " << A[front] << std::endl;
    front = (front + 1) % MAX_SIZE;
  }
}

void print()
{
  if (isEmpty())
  {
    std::cout << "The queue is empty";
    return;
  }
  int i = front;
  while (i != rear)
  {
    std::cout << A[i] << " ";
    i = (i + 1) % MAX_SIZE;
  }
  std::cout << A[i] << " " << std::endl;
}