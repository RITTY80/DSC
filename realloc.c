#include <stdio.h>
#include <stdlib.h>
int main() {
 int *ptr;
 int n = 5, new_n = 10;
 // Step 1: Allocate memory for 5 integers using malloc
 ptr = (int*) malloc(n * sizeof(int));
 // Check if malloc was successful
 if (ptr == NULL) {
 printf("Memory allocation failed.\n");
 return 1;
 }
 // Assign values to the initial array
 for (int i = 0; i < n; i++) {
 ptr[i] = i + 1;
 }
 printf("Original array: ");
 for (int i = 0; i < n; i++) {
 printf("%d ", ptr[i]);
 }
 // Step 2: Resize the allocated memory to hold 10 integers
 ptr = (int*) realloc(ptr, new_n * sizeof(int));
 if (ptr == NULL) {
 printf("Memory reallocation failed.\n");
 return 1;
 }
for (int i = n; i < new_n; i++) {
 ptr[i] = i + 1;
 }
printf("\nResized array: ");
 for (int i = 0; i < new_n; i++) {
 printf("%d ", ptr[i]);
 }
 // Step 3: Free the dynamically allocated memory
 free(ptr);
 return 0;
}
