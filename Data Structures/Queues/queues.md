## Queues

A queue is a linear structure which follows a particular order in which the operations are performed. The order is first in first out (FIFO). A good example is any queue of customers for a resource where the cunsumer that came first is served first. The difference between stacks and queues is in removing. In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.

**OR**

A list or collection with the restrition that insertion can be performed at one end (rear) and deletion can be performaed at other end (front)

![queue representation](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/02/Queue.png)

### Operation on queue:

Mainly the following for basic operations are performed on queue:

- **Enqueue**: Adds an item to the queue. If the queue is full, then it is said to be an overflow operation

- **Dequeue**: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition.
- **Front**: Get the front item from queue.
- **Rear**: Get the last item from queue.
- **IsEmpty**

**All the operations can be performed in constant time i.e. O(1)**

### Application of queues

Queue is used when things don’t have to be processed immediately, but have to be processed in First InFirst Out order like Breadth First Search. This property of Queue makes it also useful in following kind of scenarios.

1. When a resource is shared among multiple consumers. Examples include CPU scheduling, Disk Scheduling.
2. When data is transferred asynchronously (data not necessarily received at same rate as sent) between two processes. Examples include IO Buffers, pipes, file IO, etc.

### Implementation of queues

Queues can be implemeted in two ways:

1. Using arrays
2. Using Linked List

### Queues using arrays

    int A[10]
    front <- -1
    rear <- -1
    IsEmpty()
    {
    if front == -1 && rear ==-1
    return true
    else
    return false
    }

    Enqueue(x)
    {
    if IsFull()
    return
    else if IsEmpty()
    {
    front <- rear <- 0
    }
    else
    {
    rear <- rear + 1
    }
    A[rear] <- x
    }

    Dequeue()
    {
    if isEmpty()
    return
    else if front == rear
    front <- rear <- -1
    else
    front <- front <- +1
    }

### Queues as circular arrays

Circular Queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle and the last position is connected back to the first position to make a circle. It is also called ‘Ring Buffer’.

![Circular queue interpretion](https://media.geeksforgeeks.org/wp-content/uploads/Circular-queue.png)

#### Why circular queue is needed?

In a normal Queue, we can insert elements until queue becomes full. But once queue becomes full, we can not insert the next element even if there is a space in front of queue.

![Circular queue](https://media.geeksforgeeks.org/wp-content/uploads/Circular-queue_1.png)

#### Finding the next and previous position

current position = i

next position = (i+1) % n

previous position = (i+n-1) % n
