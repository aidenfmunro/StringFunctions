//! @file

#include "stringfunctions.h"

size_t stringLength(const char *str)
{
    myAssert(str, NULL_ERROR);

    size_t n = 0;

    while (*str != '\0')
      {
        n++;
        str++;
      }

    return n;
}

void stringnCopy(char *str_copy, const char *str, size_t num)

{
    myAssert(str, NULL_ERROR);
    myAssert(str_copy, NULL_ERROR);

    size_t len_s = stringLength(str);

    myAssert(str_copy + len_s < str || str + len_s < str_copy, OVERLAP_ERROR);

    size_t cut_num = min(num, len_s);

    for (size_t i = 0; i < cut_num; i++)
      {
        str_copy[i] = str[i];
      }
      
    str_copy[cut_num - 1] = '\0';
}

void stringCopy(char *str_copy, const char *str)
{
    myAssert(str, NULL_ERROR);
    myAssert(str_copy, NULL_ERROR);

    size_t len_s = stringLength(str);

    myAssert(str_copy + len_s < str || str + len_s < str_copy, OVERLAP_ERROR);

    while ((*str_copy++ = *str++) != '\0') { ; }
}

int stringCompare(const char *str1, const char *str2)
{
    myAssert(str1, NULL_ERROR);
    myAssert(str2, NULL_ERROR);

    size_t i = 0;

    for (; i < min(stringLength(str1), stringLength(str2)); i++)
      {
        if (str1[i] != str2[i])
          {
                return str1[i] - str2[i];
          }
      }

    return 0;
}

char *stringConcat(char *str1, const char *str2)
{
    myAssert(str1, NULL_ERROR);
    myAssert(str1, NULL_ERROR);

    size_t len_s1 = stringLength(str1);

    for (int j = 0; str2[j] != '\0'; j++)
      {
        str1[len_s1 + j] = str2[j];
      }

    return str1;
}

char *charFind(char *str, int chr)
{
    myAssert(str, NULL_ERROR);

    while(*str != '\0')
      {
        if (*str == chr)
          {
            return str;
          }
        str++;
      }
    return NULL;
}

char *stringFind(const char *substr, char *str)
{
    myAssert(substr, NULL_ERROR);
    myAssert(str, NULL_ERROR);

    size_t len_substr = stringLength(substr);
    size_t len_str = stringLength(str);

    size_t shift[NUMBER_OF_CHARS] = {}; // shift

    for (size_t i = 0; i < NUMBER_OF_CHARS; i++)
      {
        shift[i] = len_substr;
      }
    
    for (size_t i = len_substr - 1; i > 0; i--)
      {
        size_t temp = substr[i - 1];

        shift[temp] = min(len_substr - i, temp);    
      }
    
    size_t cur_pos = len_substr - 1;

    while (cur_pos < len_str)
      {
        int sym = findShift(substr, str, len_substr, cur_pos);

        if (sym == FOUND)
          {
            return str + cur_pos - len_substr + 1; 
          }
        
        cur_pos += shift[sym];
      }

  return NULL;
}

int findShift(const char* substr, const char *str, const size_t len_substr, const size_t cur_pos)
{
    myAssert(substr, NULL_ERROR);
    myAssert(str, NULL_ERROR);

    for(size_t j = 0; j < len_substr; j++)
      {
        if (substr[len_substr - j - 1] != str[cur_pos - j])            
          {
            return str[cur_pos - j];
          }
      }
      
  return FOUND; 
}


