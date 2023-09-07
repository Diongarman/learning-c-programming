#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 // Define a size for your stack

typedef struct {
    char arr[MAX_SIZE]; // An array to hold the symbols
    int top; // An index to keep track of the topmost element
} Stack;

void initialiseStack (Stack *stack) {
    stack->top = 0;
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

char pop(Stack *stack) {
    if (stack->top == -1) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return '\0'; // Return a null character to indicate error
    } else {
         // Just decrement the top index
        return stack->arr[stack->top--];
    }

}

int isValid(char * s){
    int boolean = 0;

    Stack myStack;
    initialiseStack(&myStack);

    //iterate over string of symbols
    for (int i = 0; i < strlen(s); i++) {

        if (s[i] == '(' || s[i] == '{'|| s[i] == '[') {
            push(&myStack, s[i]);


        } else if (s[i] == ')') {
            char poppedElem = pop(&myStack);

            if (myStack.top < 0 || poppedElem != '(') {
                // printf("not (");
                return 0;
            }
        } else if (s[i] == '}' ) {
            char poppedElem = pop(&myStack);

            if (myStack.top < 0 || poppedElem != '{') {
                return 0;
            }

        } else if (s[i] == ']') {
            char poppedElem = pop(&myStack);

            if (myStack.top < 0 || poppedElem != '[') {
                return 0;
            }

        }
        
    }
    printf("top stack index is %d\n", myStack.top);
    if (myStack.top == 0) {
        return 1;
    } else {
        return 0;
    }



    return boolean;
}

int main() {
    // printf("%d\n", isValid("((())"));
    // printf("%d\n", isValid("{{{}}"));
    // printf("%d\n", isValid("())"));
    // printf("%d\n", isValid("{}}")); 

    // printf("%d\n", isValid("[({})]"));
    printf("%d\n", isValid("()()()"));
    printf("%d\n", isValid("(){}[]"));
    printf("%d\n", isValid("(()()()"));
    printf("%d\n", isValid("()()())"));
    printf("%d\n", isValid("(){}[]]"));
    printf("%d\n", isValid("((){}[]"));
}