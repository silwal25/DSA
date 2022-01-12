## Introduction to arrays

An array is a collection of items at contiguous memory location. The idea is to store multiple items of same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e. the memory location of the first element of the array. (generally denoted by the name of the array). The base valus is index 0 and the difference between the two indexes is the offset.
For simplicity, we can think of a array as a fleet of stairs where in each step is placed a value (let's say one of your friends). Here, you can identify the location of any of your friends by simply knowing the count of the steps they are on.

![index representation](https://media.geeksforgeeks.org/wp-content/uploads/array-2.png)

## Array size

In C language, array has a fixed size meaning once the size is given to it it cannot be changed i.e. you can't shring it neither can you expend it. The reason was that for expanding, if we change the size we can't be sure that we get the next memory location to us as free. The shring will not work because the array when declared, gets memory statically allocated and thus compiler can only destory it.

### Example code

`
#include <iostream>
using namespace std;

int main()
{
// Creating an integer array named arr of size 10.
int arr[10];
// accessing element at 0 index and setting its value
// to 5.
arr[0] = 5;
// access and print value at 0 index we get the output
// as 5.
cout << arr[0];
return 0;
}
`
