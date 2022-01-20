## Stacks

Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).
OR
A list with the restriction that insertion and deletion can be performaed only from one end, called the top

![stack representation](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/stack.png)

### Operations

1. Push (inserting an item in the stack)
2. Pop (removing an item from an stack)
3. Top (Getting the top element)
4. IsEmpty (Checking for empty stack)

** All the operations can be performend in constant time, i.e. time complexity is O(1) **

## Applications

1. Used to execute function calls/recursion
2. Undo in an editor
3. Balanced Parentheses

## Implementation of stacks

Stacks can be implements in two ways:

- Using arrays
- Using Linked lists

  int A[10]
  top <- -1
  Push(x)
  {
  top <- top + 1
  A[top] <- x
  }

  Pop()
  {
  top <- top - 1
  }

  Top()
  {
  return a[top]
  }

  IsEmpty()
  {
  if(top == -1)
  return true
  else
  return false
  }
