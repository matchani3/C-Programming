#include <stdio.h>

struct name
{
    char first[10];
    char middle[10];
    char last[15];
};

struct student
{
    struct name studentName;
    int age;
    char major[20];
};

int main()
{
    struct student student1 = {{"Sangeetha", "Jacob", "Matchanickal"}, 20, "Computer Science"};

    printf("Name: %s %s %s\n", student1.studentName.first, student1.studentName.middle, student1.studentName.last);
    printf("Age: %i\n", student1.age);
    printf("Major: %s\n", student1.major);

    return 0;
}
