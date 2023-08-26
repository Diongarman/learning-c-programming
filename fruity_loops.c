#include <stdio.h>

int main() {
    
    int x = 4;

    for (int i = 0; i < x; i++) {
        // printf("%d\n", arr[i]);

        for (int j = 0; j < x; j++) {
            printf("%d\n", j);
            x = 2;
        }
    }

    return 0;
}

/*

Compare & Contast with Python

Consider the code
x=4
for i in range(0, x):
    print i
It prints
0 1 2 3
Now, think about the code
x=4
for i in range(0, x):
    print i x=5
It raises the question of whether changing the value of x inside the loop affects the number of iterations. It does not. The range function in the line with for is evaluated just before the first iteration of the loop, and not reevaluated for subsequent iterations. To see how this works, consider
x=4
for j in range(x):
    for i in range(x): 
        print i
        x=2
It prints
0 1 2 3 0 1 0 1 0 1
because the range function in the outer loop is evaluated only once, but the range function in the inner loop is evaluated each time the inner for statement is reached.


Source: Introduction to Computation & Programming Using Python - Guttag (MIT)


*/



