#include <stdlib.h>
#include <stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    for (int i = 0; i < numsSize; i++) {

      for (int j = i + 1; j < numsSize; j++) {
        
        if (nums[i] + nums[j] == target) {
            int *indices = (int*)malloc(2 * sizeof(int));
            indices[0] = i;
            indices[1] = j;
            *returnSize = 2;
            return indices;
        }

    }
  }

    *returnSize = 0;
    return NULL;

}


int main() {

    int nums[] = {3,2,4};
    int length = sizeof(nums) / sizeof(nums[0]);
    int target = 6;
    int returnSize;

    int* indices = twoSum(nums, length, target, &returnSize);

    if (returnSize == 2) {
        printf("Indices: %d, %d\n", indices[0], indices[1]);
    } else {
        printf("No two sum solution found!\n");
    }

    free(indices);  // Don't forget to free the memory!

    return 0;
}