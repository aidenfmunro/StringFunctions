//! @file

#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

#ifndef STRINGFUNCTIONS_H
#define STRINGFUNCTIONS_H

#define min(x, y)               \
    ({ __typeof__ (x) _x = (x); \
       __typeof__ (y) _y = (y); \
       _x < _y ? _x : _y; })

#define max(x, y)               \
    ({ __typeof__ (x) _x = (x); \
       __typeof__ (y) _y = (y); \
       _x > _y ? _x : _y; })

#define myAssert(EXPRESSION, ERROR_CODE)                                       \
                            if (! (EXPRESSION))                                \
                              {                                                \
        fprintf (stderr,"%s, failed at %s:%d\n", #ERROR_CODE                   \
        , __FILE__, __LINE__);                                                 \
        exit(ERROR_CODE);                                                      \
      }

/**
 * 
 * 
 * Enum for error codes. 
 * 
 */

enum ERRORS
{
    OVERLAP_ERROR   = 1,
    NULL_ERROR      = 2
};

const int NUMBER_OF_CHARS = 256;
const int FOUND = -1;

/**
 * 
 * \brief  This function measures the length of the string.
 * @param str [in] - string. 
 * @return length of the string.
 * 
 */

size_t stringLength(const char *str);

/**
 * 
 * \brief This function copies first n elemnts of a string.
 * @param str_copy [in, out] - future partial copy of str.   
 * @param str [in] - string thats gets copied.
 * @param num [in] - n elements to copy.
 * @return partial copy of str.
 * 
 */

void stringnCopy(char *str_copy, const char *str, size_t num);

/**
 * 
 * \brief This function copies a string.  
 * @param str_copy [in, out] - future copy of str.  
 * @param str [in] - string that gets copied. 
 * @return copy of str.
 * 
 */

void stringCopy(char *str_copy, const char *str);

/**
 *  
 * \brief This function compares strings. 
 * @param str1 [in] - string 1. 
 * @param str2 [in] - string 2.
 * @return Negative value if str1 appears before str2 in lexicographical order. Zero if str1 and str2 compare equal.
 * Positive value if str1 appears after str2 in lexicographical order.
 * 
 */

int stringCompare(const char *str1, const char *str2);

/**
 * 
 * \brief This function unites 2 strings.
 * @param str1 [in] - string 1.  
 * @param str2 [in] - string 2.
 * @return new string that unites str1 and str2.
 * 
 */ 

char *stringConcat(char *str1, const char *str2);

/**
 * 
 * \brief This functin finds the first appearance of a char.
 * @param str [in] - string.
 * @param chr [in] - char.
 * @return address of the char in the string.
 * 
 */

char *charFind(char *str, int cht);

/**
 * 
 * \brief This function finds a string in a string. 
 * @param substr [in] - substring. 
 * @param str [in] - string.
 * @return adress of the first element of the substring in string.
 * 
 */

char *stringFind(const char *substr, char *str);

/**
 * 
 * \brief This function shifts the substring in the algorithm.
 * @param substr [in] - substring.
 * @param str [in] - string.
 * @param len_substr [in] - the length of the substring.
 * @param cur_pos [in] - current position of the last element of the substring in string.
 * @return int of the char for the shift table, -1 if the string contains the substring. 
 * 
 */

int findShift(const char* substr, const char *str, const size_t len_substr, const size_t cur_pos);

#endif
