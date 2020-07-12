#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"random_print.h"

// check if used  each time
void random_print_brute_force(unsigned int n)
{
    int arr[n];
    int isUsed;
    srand(time(0));
    for (size_t i = 0; i < n; i++) {
        do {
            arr[i] = rand() % 10 + 1;
            isUsed = 0;
            for (size_t j = 0; j < i; j++) {
                if(arr[i] == arr[j]) {
                    isUsed = 1;
                    break;
                }
            }
            
        } while (isUsed == 1);
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// use a table to store show up times
void random_print_table(int n)
{
    int hash_table[n];
    int m;
    
    srand(time(0) + 1);
    
    for (size_t i = 0; i < n; i++) {
        hash_table[i] = 0;
    }
    
    for (size_t i = 0; i < n; i++) {
        do {
            m = rand() % 10 + 1;
        } while (hash_table[m - 1] != 0);
        hash_table[m - 1] = 1;
        printf("%d ", m);
    }
    printf("\n");
}


// use swap method
void random_print_swap(int n)
{
    int arr[n];
    int m, temp;

    srand(time(0));
    
    // create an ordered array
    for (size_t i = 1; i <= n; i++)
        arr[i] = i;
    
    // randomize the array
    for (size_t i = 0; i < n; i++) {
        m = rand() % n;

        // swap arr[m] with current position arr[i]
        temp = arr[m];
        arr[m] = arr[i];
        arr[i] = temp;
    }

    // print out the array
    for (size_t i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}

// use swap method
void random_print_swap2(int n)
{
    int arr[n];
    int m, temp;

    srand(time(0));
    
    // create an ordered array
    for (size_t i = 1; i <= n; i++)
        arr[i] = i;
    
    // randomize the array
    for (size_t i = 0; i < n; i++) {
        m = rand() % (n - i) + i;

        // swap arr[m] with current position arr[i]
        temp = arr[m];
        arr[m] = arr[i];
        arr[i] = temp;

        printf("%d ", arr[i]);
    }

    
    printf("\n");
}