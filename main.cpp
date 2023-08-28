#include "stringfunctions.h"

int main()
{   
    char a[] = "again";
    char b[] = "play";

    /* printf("%d\n", int(stringFind(a, b)) - int(b) + 1);     */

    printf("%d\n", int(b));

    /* printf("%d\n", int(charFind(b, int(a))) - int(b) + 1);  */

    puts(stringConcat(a, b));
}