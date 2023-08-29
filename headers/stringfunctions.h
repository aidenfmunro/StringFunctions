#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

#ifndef STRINGFUNCTIONS_H
#define STRINGFUNCTIONS_H

#define min(x, y) (((x) < (y)) ? (x) : (y)) //! Make without too much computation

#define max(x, y) (((x) > (y)) ? (x) : (y))

const int NUMBER_OF_CHARS = 256;
const int FOUND = -1;


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

size_t stringLength(const char *str);
void stringnCopy(char *str_copy, const char *str, size_t num);
void stringCopy(char *str_copy, const char *str);
int stringCompare(const char *str1, const char *str2);
char *stringConcat(char *str1, const char *str2);
char *charFind(const char *str, int cht);
char *stringFind(const char *substr, char *str);
int findShift(const char* substr, const char *str, const size_t len_substr, const size_t cur_pos);

#endif
