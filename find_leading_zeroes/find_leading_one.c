#include"find_leading_one.h"
#include<stdio.h>

unsigned int find_leading_one(int n)
{
    for (unsigned int pos =  8 * sizeof(n) - 1; pos >= 0; pos--) {
        if((n >> pos) & 1) {
            printf("n= %d, in pos = %u\n", n, pos);
            return pos + 1;
        }
    }
    return 99;
}