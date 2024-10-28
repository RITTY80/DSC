#include <stdio.h>
#include <stdlib.h>
int main() {
 int a = 10;
 float b = 5.5;
 char c = 'A';
 // Declare void pointers
 void *ptr;
 // Point to an integer
 ptr = &a;
 printf("Value of integer a = %d\n", *(int*)ptr); // Cast to int* before dereferencing
 // Point to a float
 ptr = &b;
 printf("Value of float b = %.2f\n", *(float*)ptr); // Cast to float* before dereferencing
 // Point to a char
 ptr = &c;
 printf("Value of char c = %c\n", *(char*)ptr); // Cast to char* before dereferencing
 return 0;
}
