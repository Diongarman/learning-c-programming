#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 // Define a size for your stack

typedef struct {
    char arr[MAX_SIZE]; // An array to hold the symbols
    int top; // An index to keep track of the topmost element
} Stack;

void initialiseStack (Stack *stack) {
    stack->top = -1;
} 

//write function for pushing to stack

void push(Stack *stack, char symbol) {
    if (stack->top < MAX_SIZE - 1) {
        stack->top += 1;
        stack->arr[stack->top] = symbol;
    } else {
        printf("Stack Overflow! Cannor push more elements. \n");
    }
}
//write function for popping stack

void pop(Stack *stack) {
    if (stack->top == -1) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
    } else {
        stack->top--;  // Just decrement the top index
    }

}

int isValid(char * s){
    int boolean = 0;

    Stack myStack;
    initialiseStack(&myStack);

    //iterate over string of symbols
    for (int i = 0; i < strlen(s); i++) {
        // if opening
            //push to stack
        if (s[i] == '(' || s[i] == '{'|| s[i] == '[') {
            push(&myStack, s[i]);


        } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
            pop(&myStack);

            if (myStack.top < 0) {
                return 0;
            }
        }
        
    }

    if (myStack.top == 0) {
        return 1;
    } else {
        return 0;
    }



    return boolean;
}

int main() {
    printf("%d\n", isValid("((())")); 
}