#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int x = 729;
  int ans = 0;


    while(pow(ans, 3) < abs(x)) { 
        ans++;

    }
    if(pow(ans, 3) != abs(x)) {
        printf("%d is not a perfect cube", x);
    }
    else {
        if (x < 0) {
            ans = -ans;
        }
        printf("the cube root of %d is %d", x, ans);

    }

  return 0;
}