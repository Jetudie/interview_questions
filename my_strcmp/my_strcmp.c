#include"my_strcmp.h"
#include<stdio.h>

/*
 * strcmp:
 *  String compare.
 *  Return  1 if str1 is larger than str2
 *  Return -1 if str2 is larger than str1
 *  Return  0 if two strings are the same
 */

int my_strcmp(char *str1, char *str2)
{
    if (str1 == NULL || str2 == NULL)
        return -1;
    
    while(*str1 != '\0' || *str2 != '\0') {
        if (*str1 < *str2)
            return -1;
        else if (*str1 > *str2)
            return 1;
        str1++;
        str2++;
    }

    return 0;
}