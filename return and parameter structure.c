#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct student function(struct student std);

struct student
{
    char name[10];
    int age;
    char major[20];
};

int main()
{
    struct student student1 = {"Sangeetha", 20, "Computer Science"};
    struct student student2;

    student2 = function(student1);

    printf("Name: %s\n", student2.name);
    printf("Age: %i\n", student2.age);
    printf("Major: %s\n", student2.major);

    return 0;

}

struct student function(struct student std)
{
    struct student student3;

    strcpy(student3.name, std.name);
    student3.age = std.age;
    strcpy(student3.major, std.major);

    return student3;

}
