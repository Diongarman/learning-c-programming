#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define MAX_SIZE 100 // Define a size for your stack

typedef struct {
    char arr[MAX_SIZE]; // An array to hold the symbols
    int top; // An index to keep track of the topmost element
} Stack;

void initialiseStack(Stack *stack) {
    stack->top = -1; // Initialize to -1 to represent an empty stack
} 

// Write function for pushing to stack
void push(Stack *stack, char symbol) {
    if (stack->top < MAX_SIZE - 1) {
        stack->top += 1;
        stack->arr[stack->top] = symbol;
    } else {
        printf("Stack Overflow! Cannot push more elements.\n");
    }
}

// Write function for popping stack
char pop(Stack *stack) {
    if (stack->top == -1) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return '\0'; // Return a null character to indicate error
    } else {
        return stack->arr[stack->top--]; // Just decrement the top index and return the popped character
    }
}

bool isPalindrome(int x) {
    char s[20]; // Allocate enough space to hold the string representation of the number

    sprintf(s, "%d", x); 

    if(x < 0) return false; // Negative numbers are not palindromes
    if(x <= 9) return true; // Single-digit numbers are always palindromes

    Stack myStack;
    initialiseStack(&myStack);

    double mid_point = (double)strlen(s) / 2;
    int U_mid = (int)ceil(mid_point);
    int L_mid = (int)floor(mid_point);

    // Iterate over string of symbols
    for (int i = 0; i < strlen(s); i++) {
        if (i < L_mid) {
            push(&myStack, s[i]);
        } else if (i >= U_mid) {
            char poppedElem = pop(&myStack);
            if (poppedElem != s[i]) return false;
        }
    }

    return true;
}

int main() {
    printf("%d\n", isPalindrome(121)); // Prints 1, which means true
    printf("%d\n", isPalindrome(123));
    printf("%d\n", isPalindrome(-121));
    printf("%d\n", isPalindrome(1221));
    printf("%d\n", isPalindrome(1234));
    return 0;
}
