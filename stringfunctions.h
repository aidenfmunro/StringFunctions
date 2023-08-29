#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

#ifndef STRINGFUNCTIONS_H
#define STRINGFUNCTIONS_H

#define min(x, y) (((x) < (y)) ? (x) : (y))

#define max(x, y) (((x) > (y)) ? (x) : (y))


#define myAssert(EXPRESSION, ERROR_CODE)                                       \
                            if (! (EXPRESSION))                                \
                              {                                                \
        fprintf (stderr,"%s, failed at %s:%d\n", #ERROR_CODE                   \
        , __FILE__, __LINE__);                                                 \
        exit(ERROR_CODE);                                                      \
      }

enum ERRORS
{
    OVERLAP_ERROR   = 1,
    NULL_ERROR      = 2
};

size_t stringLength(const char *s);
void stringnCopy(char *s_copy, const char *s, size_t num);
void stringCopy(char *s_copy, const char *s);
int stringCompare(const char *s1, const char *s2);
char *stringConcat(char *s1, const char *s2);
char *charFind(char *str, int ch);
char *stringFind(const char *substr, char *str);

#endif
