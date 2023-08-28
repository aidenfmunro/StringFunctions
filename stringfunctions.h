#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

#ifndef STRINGFUNCTIONS_H
#define STRINGFUNCTIONS_H

size_t stringLength(const char* s);
void stringnCopy(char *s_copy, const char *s, size_t num);
void stringCopy(char *s_copy, const char *s);
int stringCompare(const char *s1, const char *s2);
char *stringConcat(char *s1, const char* s2);
char *charFind(char *str, int ch);
char *stringFind(const char *substr, char *str);

#endif
