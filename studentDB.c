#include <stdio.h>

// Define a structure named STUDENT
struct STUDENT {
    char name[50];
    int roll_no;
    float marks;
};

// Function to read student details
void readStudentDetails(struct STUDENT *s, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name); // Read name with spaces
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

// Function to display student details
void displayStudentDetails(struct STUDENT *s, int n) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n", s[i].marks);
    }
}

int main() {
    int n;
    // Ask for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of STUDENT structures
    struct STUDENT students[n];

    // Read and display student details
    readStudentDetails(students, n);
    displayStudentDetails(students, n);

    return 0;
}

