#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void addEmployee() {
    FILE *fp;
    struct Employee e;

    fp = fopen("employee.txt", "ab");   // open file in append binary mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    printf("Employee record added successfully.\n");
}

void displayAll() {
    FILE *fp;
    struct Employee e;

    fp = fopen("employee.txt", "rb");   // open file in read binary mode
    if (fp == NULL) {
        printf("No records found (file missing).\n");
        return;
    }

    printf("\n--- Employee Records ---\n");
    while (fread(&e, sizeof(e), 1, fp) == 1) {
        printf("ID: %d\tName: %s\tSalary: %.2f\n", e.id, e.name, e.salary);
    }

    fclose(fp);
}

void searchEmployee() {
    FILE *fp;
    struct Employee e;
    int id, found = 0;

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    fp = fopen("employee.txt", "rb");
    if (fp == NULL) {
        printf("No records found (file missing).\n");
        return;
    }

    while (fread(&e, sizeof(e), 1, fp) == 1) {
        if (e.id == id) {
            printf("\nRecord Found:\n");
            printf("ID: %d\nName: %s\nSalary: %.2f\n", e.id, e.name, e.salary);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee with ID %d not found.\n", id);
    }

    fclose(fp);
}

int main() {
    int choice;

    do {
        printf("\n===== EMPLOYEE DATABASE =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayAll();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while(choice != 4);

    return 0;
}
=
