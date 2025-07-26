#include<stdio.h>
#include<string.h>

typedef struct student {
    int roll;
    char name[50];
    char department[50];
    char course[50];
    int year;
} student;

void fun(student s1, student s2) {
    if (strcmp(s1.department, s2.department) == 0) {
        printf("Departments are the same.\n");
    } else {
        printf("Departments are not the same.\n");
    }
    return;
}

int main() {
    student s1, s2;

    s1.roll = 23;
    strcpy(s1.name, "Abhishek Sen");
    strcpy(s1.department, "it");
    strcpy(s1.course, "btech");
    s1.year = 2;

    s2.roll = 23;
    strcpy(s2.name, "Abhishek Sen");
    strcpy(s2.department, "it");
    strcpy(s2.course, "btech");
    s2.year = 2;

    fun(s1, s2);
    return 0;
}
