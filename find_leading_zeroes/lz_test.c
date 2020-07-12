#include<stdio.h>
#include<stdlib.h>
#include"find_leading_one.h"

int main(int argc, char const *argv[])
{
    unsigned int n, mask = 1;
    srand(1);
    
    for (int  i = 1; i <= sizeof(n) * 8; i++) {
        // generate n with leading one in ith position
        n = rand();

        // 00...0111...11
        mask = ~(UINT_MAX & ~((1 << i) - 1));

        n = (n & mask) | (1 << (i - 1));

        if (find_leading_one(n) != i) {
            printf("Fail in %d\n", i);
            printf("n = %u\n", n);
            printf("result is %u", find_leading_one(n));
            return 0;
        }
        
    }
    
    printf("Pass\n");

    getchar();
    getchar();

    return 0;
}
