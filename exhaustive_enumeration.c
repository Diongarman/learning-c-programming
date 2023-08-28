#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void findPerfectCubeRoot(int x);
void findPerfectCubeRootFor(int x);

int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    // findPerfectCubeRoot(x);  // Calling the function with user-provided x
    findPerfectCubeRootFor(x);
    return 0;
}


void findPerfectCubeRoot(int x) {

    int ans = 0;

    while(pow(ans, 3) < abs(x)) { 
        ans++;
    }

    if(pow(ans, 3) != abs(x)) {
        printf("%d is not a perfect cube\n", x);
    }
    else {
        if (x < 0) {
            ans = -ans;
        }
        printf("The cube root of %d is %d\n", x, ans);
    }
}

void findPerfectCubeRootFor(int x) {
    int ans = 0;
    int end =  abs(x) + 1;
    for (int i = 0; i <= end; i++) {
        ans = i;
        if (pow(i, 3) >= abs(x)) {
            break;
        }
    }
    if (pow(ans, 3) != abs(x)) {
        printf("%d is not a perfect cube\n", x);

    } else {
        if(x < 0) {
            ans = -ans;
        }
        printf("The cube root of %d is %d\n", x, ans);
    }
}
