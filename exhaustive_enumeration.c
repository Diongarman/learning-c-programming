#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void findCubeRoot(int x);

int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    findCubeRoot(x);  // Calling the function with user-provided x

    return 0;
}

void findCubeRoot(int x) {
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
