#define MAX_SIZE 100 // Define a size for your stack

typedef struct {
    char arr[MAX_SIZE]; // An array to hold the symbols
    int top; // An index to keep track of the topmost element
} Stack;

//write function for pushing to stack

//write function for popping stack

int isValid(char * s){
    int boolean = 0;

    //iterate over string of symbols
    for (int i = 0; i < strlen(s); i++) {
        // if opening
            //push to stack
        if (s[i] == '(' || s[i] == '{'|| s[i] == '[') {
            Stack[top] = s[i];
            top++;

        }
        //if closing
            // if stack isn't empty
                // compare top of stack to closing symbol
                    // if match
                        //pop stack
                    //else
                        //return false as imbalanced
            // else
                //return false
        
    }

    // if stack empty
        //return true (balanced)
    //else
        // return false

    return boolean;
}