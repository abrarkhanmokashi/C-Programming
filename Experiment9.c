#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i, topperIndex = 0;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Total Marks: ");
        scanf("%f", &s[i].marks);
    }

    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("\n\n---- TOPPER ----\n");
    printf("Name: %s\n", s[topperIndex].name);
    printf("Roll Number: %d\n", s[topperIndex].roll);
    printf("Marks: %.2f\n", s[topperIndex].marks);

    return 0;
}
