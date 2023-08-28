#include "stringfunctions.h"

int main()
{
    char a[10];
    char b[] = "bgain";

    // printf("%d\n", int(stringFind(a, b)) - int(b) + 1);

    // printf("%d\n", int(b));

    // printf("%d\n", int(charFind(b, int(a))) - int(b) + 1);

    // puts(stringConcat(a, b));

    //printf("%d", stringCompare(a, b));

    stringnCopy(a, b, 5);
    puts(a);

    // puts("%s\n", stringnCopy(a, b, 6));

    printf("%d", sizeof(a));

}
