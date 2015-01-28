#include <stdio.h>
#include <stdlib.h>

struct name
{
    char first[10];
    char middle[10];
    char last[10];
};

int main()
{
    struct name name1[5];

    strcpy(name1[0].first, "Sangeetha");
    strcpy(name1[0].middle, "Jaocb");
    strcpy(name1[0].last, "Matchani");


    printf("Name: %s %s %s", name1[0].first, name1[0].middle, name1[0].last);

    return 0;
}
