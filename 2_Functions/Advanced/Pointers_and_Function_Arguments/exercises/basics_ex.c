// 1.1 Definition
// Declare a pointer to an integer and a pointer to a character. 
// Try to think about what initial value these pointers might hold before you assign them a value.


int *a;
char *b;

// 1.2 Declaration
// Declare an integer variable and a pointer to an integer. 
// Assign the address of the integer variable to the pointer and print the address using the pointer variable.

int x = 69;
int *p;
p = &x;


// 1.3 Address Operator
// Declare several variables of different types (int, char, float). Create pointers for each and use the 
// address operator to store the address of each variable in the corresponding pointer.



int i;
char c;
float f;

int *i_pointer;
int *c_pointer;
int *f_pointer;

i_pointer = &i;
c_pointer = &c;
f_pointer = &f;

// Create a function that accepts pointers as arguments and use the address operator to pass the 
// addresses of variables to this function.


void F(int *i, int *c, int *f) {

}

F(&i, &c, &if)