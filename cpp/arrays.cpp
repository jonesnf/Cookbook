#include <stdio.h>

/**
 * 
 * @brief [Array Practice] Practice all the wonderful ways to use 
 * arrays in Cpp
 * 
 */

void traverse_arr(int arr[], int size)
{
    printf("+------- Printing Array ----------+\n");
    for(int i = 0; i < size; i++) 
        printf("Idx %d: %d\n", i, arr[i]);
}


int main(int argc, char *argv[])
{
    int arr1[] = {1, 4, 5, 6, 10};
    int arr2[4] = {100, 200, 300, 400};
    int arr3[10] = {}; 
    int *parr = arr1;
    traverse_arr(arr1, 5);
    traverse_arr(arr2, 4);
    traverse_arr(arr3, 10);
    traverse_arr(parr, 4);

    printf("[INFO] Done printing Arrays!\n");
    return 0;
}
