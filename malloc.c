#include <stdlib.h>
#include <stdio.h>

int main() {
    int *ptr = (int*)malloc(10 * sizeof(int));  // Allocates memory to store 10 integers.

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    // Now we can use ptr to access the allocated memory.

    for (int i = 0; i < 10; i++) {
        ptr[i] = i;
        printf("%d\n", ptr[i]);
    }

    // Don't forget to free the memory when you're done with it!
    free(ptr);

    return 0;
}
