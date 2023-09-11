// 1. Basics of Pointers
// 1.1 Definition
// A pointer is a variable that stores the memory address of another variable. Since it points to the location of another variable, it allows for more flexible and dynamic manipulation of data.

// 1.2 Declaration
// Pointers are declared using the * operator. Here is the syntax for declaring a pointer:
// type *pointer_name;


// 1.3 Address Operator
// The address of a variable is obtained using the & operator. Here is how you would use it:

int x = 10;
int *p = &x;

// 1.4 Dereferencing
// To access the value at the address stored in a pointer, you "dereference" the pointer using the * operator:
int y = *p; // y will be 10, the value stored at the address in p
