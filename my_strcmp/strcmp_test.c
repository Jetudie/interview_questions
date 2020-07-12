#include<stdio.h>
#include"my_strcmp.h"

int main(int argc, char const *argv[])
{
    char str1[20] = "This is a test";
    char str2[20] = "This is a test";
    char str3[20] = "This in a test";
    char str4[20] = "This is not a test";

    printf("Start!\n");
    if (my_strcmp(str1, str2) == 0 && my_strcmp(str1, str3) == 1 && my_strcmp(str1, str4) == -1 ) 
        printf("Pass!\n");
    else
        printf("Fail!\n");
    
    printf("End!\n");
    getchar();
    getchar();

    return 0;
}
