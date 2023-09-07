#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int length){
    for (int i = 0; i < length - 1; i++) {

      for (int j = 0; j < length - i - 1; j++) {

        if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        } 

    }
  }

}

int main() {
  int myArr[7] = {17, 3, 6, 2, 9, 5, 1};
  int length = sizeof(myArr) / sizeof(myArr[0]);


    //sort the array
    sortArray(myArr, length);

      // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", myArr[i]);
    }
    printf("\n");
  return 0;
}
