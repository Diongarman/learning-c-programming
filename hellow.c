#include <stdio.h>

int main() {
  int myArr[5] = {3, 6, 2, 9, 5};
  int length = sizeof(myArr) / sizeof(myArr[0]);

  for (int i = 0; i < length - 1; i++) {

      for (int j = 0; j < length - i - 1; j++) {

        if (myArr[j] > myArr[j + 1]) {
            int temp = myArr[j];
            myArr[j] = myArr[j + 1];
            myArr[j + 1] = temp;
        } 

    }
  }


      // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", myArr[i]);
    }
    printf("\n");
  return 0;
}
