#include <stdio.h>

struct student
{
    char name[10];
    int age;
    char major[20];
}student1;

int main()
{
    struct student student1 = {"Sangeetha", 20, "Computer Science"};

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Major: %s\n", student1.major);

    return 0;

}
