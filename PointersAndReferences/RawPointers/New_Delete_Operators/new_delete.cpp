#include <iostream>

/*
The new operator is used to allocate memory dynamically in C++.
It allocates a block of memory from the heap and returns a pointer
to the first byte of the block. The pointer can be assigned to
a raw pointer variable or a smart pointer.


The delete operator is used to free the memory allocated by the new operator.
It deallocates the memory block pointed to by the given pointer and returns it
to the heap. It is important to always free the memory allocated by
new to prevent memory leaks.
*/

int main() {
  int* p = new int;
  *p = 10;
  std::cout << *p << std::endl;
  delete p;
  return 0;
}