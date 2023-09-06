//! @file
//! @author Aiden Munro
//! @version 1.0

#include "stringfunctions.h"

int main()
{
    char a[] = "Heweofwgwngoonowgnowg";
    char b[] = "now";
    printf("%p\n", stringFind(b, a));

    char a1[3] = {};
    char b2[] = "now";
    stringCopy(a1, b2);
    printf("%s", a1);
}