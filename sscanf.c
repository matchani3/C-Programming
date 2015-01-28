#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    char name[10];
    int age;

    printf("Enter a string with name and age: ");
    gets(str);

    int i = sscanf(str, "%s %i", name, &age);
    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("sscanf function read %i data items\n,", i);

    return 0;
}
