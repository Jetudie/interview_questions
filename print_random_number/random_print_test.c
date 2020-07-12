#include<stdio.h>
#include"random_print.h"

int main(int argc, char const *argv[])
{
    printf("Brute force:\n");
    random_print_brute_force(10);

    printf("Hash table:\n");
    random_print_table(10);

    printf("Swap:\n");
    random_print_swap(10);

    printf("Swap:\n");
    random_print_swap2(10);

    getchar();
    getchar();

    return 0;
}
