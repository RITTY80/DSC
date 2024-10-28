#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Define the EMPLOYEE structure
struct EMPLOYEE {
 char Emp_name[50];
  int Emp_id;
 char Dept_name[30];
 float Salary;
};
// Function to read employee data
void readEmployees(struct EMPLOYEE *emp, int n) {
 for (int i = 0; i < n; i++) {
 printf("Enter details for employee %d:\n", i + 1);
 printf("Employee Name: ");
 scanf(" %[^\n]", emp[i].Emp_name);
 printf("Employee ID: ");
 scanf("%d", &emp[i].Emp_id);
 printf("Department Name: ");
 scanf(" %[^\n]", emp[i].Dept_name);
 printf("Salary: ");
 scanf("%f", &emp[i].Salary);
 }
}
// Function to display employee data
void displayEmployees(struct EMPLOYEE *emp, int n) {
 printf("\nEmployee Details:\n");
 for (int i = 0; i < n; i++) {
 printf("\nEmployee %d:\n", i + 1);
 printf("Name: %s\n", emp[i].Emp_name);
 printf("ID: %d\n", emp[i].Emp_id);
 printf("Department: %s\n", emp[i].Dept_name);
 printf("Salary: %.2f\n", emp[i].Salary);
 }
}
// Function to calculate total salary of a specific department
float totalSalaryByDept(struct EMPLOYEE *emp, int n, const char *dept) {
 float totalSalary = 0;
 for (int i = 0; i < n; i++) {
 if (strcmp(emp[i].Dept_name, dept) == 0) {
 totalSalary += emp[i].Salary;
 }
 }
 return totalSalary;
}
int main() {
 int n;
 char dept[30];
 // Input the number of employees
 printf("Enter the number of employees: ");
 scanf("%d", &n);
 // Dynamically allocate memory for N employees
 struct EMPLOYEE *employees = (struct EMPLOYEE*) malloc(n * sizeof(struct
EMPLOYEE));
 // Read employee details
 readEmployees(employees, n);
 // Display employee details
 displayEmployees(employees, n);
 // Ask for the department to calculate total salary
 printf("\nEnter the department to calculate total salary: ");
 scanf(" %[^\n]", dept);
 // Calculate total salary of the specified department
 float totalSalary = totalSalaryByDept(employees, n, dept);
 printf("Total salary for the department %s: %.2f\n", dept, totalSalary);
 // Free the allocated memory
 free(employees);
 return 0;
}
