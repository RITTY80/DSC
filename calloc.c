#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *arr;
 int n = 5;
 // Allocate memory for 5 integers and initialize all to zero
 arr = (int*) calloc(n, sizeof(int));
 // Check if memory allocation was successful
 if (arr == NULL) {
 printf("Memory allocation failed!\n");
 return 1;
 }
 // Print the array values (all should be zero initially)
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 // Free the allocated memory
 free(arr);
 return 0;
}
