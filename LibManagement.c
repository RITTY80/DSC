#include <stdio.h>
#include <string.h>
// Define a structure for BOOK
struct BOOK {
 char title[100];
 char author[50];
 int publication_year;
 float price;
};
// Function to read book details
void readBookDetails(struct BOOK *b, int n) {
 for (int i = 0; i < n; i++) {
 printf("Enter details for book %d:\n", i + 1);
 printf("Title: ");
 scanf(" %[^\n]", b[i].title); // Read book title (including spaces)
 printf("Author: ");
 scanf(" %[^\n]", b[i].author); // Read author name (including spaces)
 printf("Publication Year: ");
 scanf("%d", &b[i].publication_year);
 printf("Price: ");
 scanf("%f", &b[i].price);
 }
}
// Function to display book details
void displayBookDetails(struct BOOK *b, int n) {
 printf("\nBook Details:\n");
 for (int i = 0; i < n; i++) {
 printf("\nBook %d:\n", i + 1);
 printf("Title: %s\n", b[i].title);
 printf("Author: %s\n", b[i].author);
 printf("Publication Year: %d\n", b[i].publication_year);
 printf("Price: %.2f\n", b[i].price);
 }
}
// Function to search for a book by title
void searchBookByTitle(struct BOOK *b, int n, char *title) {
 int found = 0;
 for (int i = 0; i < n; i++) {
 if (strcmp(b[i].title, title) == 0) {
 printf("\nBook found!\n");
 printf("Title: %s\n", b[i].title);
 printf("Author: %s\n", b[i].author);
 printf("Publication Year: %d\n", b[i].publication_year);
 printf("Price: %.2f\n", b[i].price);
 found = 1;
 break;
 }
 }
 if (!found) {
 printf("\nBook with title '%s' not found.\n", title);
 }
}
int main() {
 int n;
 char title[100];
 // Input number of books
 printf("Enter the number of books: ");
 scanf("%d", &n);
 // Declare an array of BOOK structures
 struct BOOK books[n];
 // Read book details
 readBookDetails(books, n);
 // Display book details
 displayBookDetails(books, n);
 // Ask for the book title to search
 printf("\nEnter the title of the book to search: ");
 scanf(" %[^\n]", title);
 // Search for the book by title
 searchBookByTitle(books, n, title);
 return 0;
}
