#include <stdio.h>
#define MAX 100 // Maximum size of the array
// Function prototypes
void createArray(int arr[], int n);
void displayArray(int arr[], int n);
void insertElement(int arr[], int *n, int elem, int pos);
void deleteElement(int arr[], int *n, int pos);
int main() {
 int arr[MAX]; // Array to store elements
 int n = 0; // Number of elements in the array
 int choice, elem, pos;
 while (1) {
 // Menu for array operations
 printf("\nMenu:");
 printf("\n1. Create an array of N elements");
 printf("\n2. Display array elements");
 printf("\n3. Insert an element at a given position");
 printf("\n4. Delete an element at a given position");
 printf("\n5. Exit");
 printf("\nEnter your choice (1-5): ");
 scanf("%d", &choice);
 switch (choice) {
	 case 1:
 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);
 if (n > MAX) {
 printf("The maximum allowed elements are %d.\n", MAX);
 n = 0; // Reset array size if invalid input
 } else {
 createArray(arr, n);
 }
 break;
 case 2:
 displayArray(arr, n);
 break;
 case 3:
 printf("Enter the element to insert: ");
 scanf("%d", &elem);
 printf("Enter the position to insert the element: ");
 scanf("%d", &pos);
 insertElement(arr, &n, elem, pos);
 break;
 case 4:
 printf("Enter the position to delete the element: ");
 scanf("%d", &pos);
 deleteElement(arr, &n, pos);
 break;
 case 5:
 printf("Exiting program...\n");
 return 0;
 default:
 printf("Invalid choice! Please choose between 1 and 5.\n");
 }
 }
 return 0;
}
void createArray(int arr[], int n) {
 int i;
 printf("Enter %d elements:\n", n);
 for (i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 printf("Array created successfully.\n");
}
void displayArray(int arr[], int n) {
 int i;
 if (n == 0) {
 printf("Array is empty.\n");
 } else {
 printf("Array elements are: ");
 for (i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 }
}
void insertElement(int arr[], int *n, int elem, int pos) {
 int i;
 if (*n == MAX) {
 printf("Array is full! Cannot insert more elements.\n");
 } else if (pos < 1 || pos > *n + 1) {
 printf("Invalid position! Enter a position between 1 and %d\n", *n + 1);
 } else {
 // Shift elements to the right
 for (i = *n; i >= pos; i--) {
 arr[i] = arr[i - 1];
 }
 arr[pos - 1] = elem;
 (*n)++; // Increase the size of the array
 printf("Element inserted successfully.\n");
 }
}
void deleteElement(int arr[], int *n, int pos) {
 int i;
 if (*n == 0) {
 printf("Array is empty! Nothing to delete.\n");
 } else if (pos < 1 || pos > *n) {
 printf("Invalid position! Enter a position between 1 and %d\n", *n);
 } else {
 for (i = pos - 1; i < *n - 1; i++) { // Shift elements to the left
 arr[i] = arr[i + 1];
 }
 (*n)--; // Decrease the size of the array
 printf("Element deleted successfully.\n");
 }
}
