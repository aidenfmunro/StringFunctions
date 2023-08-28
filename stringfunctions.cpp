#include "stringfunctions.h"

size_t stringLength(const char* s)
{
    size_t n = 0;

    while (*s != '\0')
      {
        n++;
        s++;
      }

    return n;
}

void stringnCopy(char *s_copy, const char *s, size_t num)

{
    for (size_t i = 0; i < num; i++)
      {
        s_copy[i] = s[i];
      }
}

void stringCopy(char *s_copy, const char *s)
{
    while ((*s_copy = *s) != '\0')
      {
        s_copy++;
        s++;
      }
}

int stringCompare(const char *s1, const char *s2)
{
    while(*s1)
      {
        if (*s1 != *s2)
          {
            return false;
          }

        s1++;
        s2++;
      }

    return true;
}

char *stringConcat(char *s1, const char *s2)
{
    size_t len_s1 = strlen(s1) - 1;

    for (int j = 0; s2[j] != '\0'; j++)
      {
        s1[len_s1 + j] = s2[j];
      }

    return s1;
}

char *charFind(char *str, int ch)
{
    while(*str != '\0')
      {
        if (*str == ch)
          {
            return str;
          }
        str++;
      }
    return NULL;
}

char *stringFind(const char *substr, char *str)
{
    size_t i = 0;
    size_t len_substr = strlen(substr);
    size_t len_str = strlen(str);
    for (; i < len_str - len_substr; i++)
      {
        bool flag = true;

        size_t j = 0;

        for (j; j < len_substr; j++)
          {
            if (substr[j] != str[i+j])
              {
                flag = false;
              }
          }
        if (flag)
          {
            return &str[i + j - len_substr];
          }
      }

    return NULL;
}


