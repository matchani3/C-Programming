#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*const char* c = "200.45";
    double a = atof(c);
    int b = atoi(c);

    printf("%f\n", a);
    printf("%i\n", b);
    return 0;*/

    char str[20];
    strcpy(str, "20.5678");
    float f = atof(str);
    int a = atoi(str);

    printf("%i\n", a);
    printf("%f\n", f);

    return 0;
}
