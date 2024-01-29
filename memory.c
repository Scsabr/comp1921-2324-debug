// This program is designed to test the Abort Signal
#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr)
{
    printf("Array values: ");
    for (int i = 1; i <= 5; ++i) 
        printf("%d ", arr[i]);
    printf("\n");
    free (arr); 
    
}
int main() {
    // Dynamically allocate memory for an array of integers
    int *dynamicArray = (int *)malloc(5 * sizeof(int));

    // Check if allocation was successful
    if (dynamicArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit with an error code
    }

    // Initialize the array
    for (int i = 0; i < 5; ++i) {
        dynamicArray[i] = i * 10;
    }

    // Print array values
    print_array(dynamicArray);
    
    // Free the allocated memory
    free(dynamicArray);

    return 0;  // Exit successfully
}
