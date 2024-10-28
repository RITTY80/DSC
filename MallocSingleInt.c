#include <stdio.h>
#include <stdlib.h>
int main() {
 // Dynamically allocate memory for a single integer
 int *ptr = (int*) malloc(sizeof(int));
 // Check if the memory was successfully allocated
 if (ptr == NULL) {
 printf("Memory allocation failed.\n");
 return 1;
 }
 // Assign a value to the dynamically allocated integer
 *ptr = 42;
 // Print the value
 printf("The value stored at ptr: %d\n", *ptr);
 // Free the allocated memory
 free(ptr);
 return 0;
}
