
#include <stdio.h>

void print_asterisk(int n);
void print_asterisk2(int n);
void print_asterisk3(int n);
void print_asterisk4(int n);
void print_asterisk5(int n);

int main(int argc, char const *argv[])
{
    print_asterisk(5);
    printf("\n");
    print_asterisk2(5);
    printf("\n");
    print_asterisk3(5);
    printf("\n");
    print_asterisk4(3);
    print_asterisk4(5);
    printf("\n");
    print_asterisk5(3);
    print_asterisk5(5);

    getchar();
    getchar();

    return 0;
}

void print_asterisk(int n)
{
    // print out row by row and print out asterisk when reach index
    for (int row = 0; row < n; row++)
    {
        for (int col = 0, index = n - 1 - row; col < n; col++)
        {
            if (col < index)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}

void print_asterisk2(int n)
{
    // print out row by row and print out asterisk when reach index
    for (int row = 0; row < n; row++)
    {
        for (int col = 0, index = n - 1 - row; col < n; col++)
        {
            if (col > index)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}

void print_asterisk3(int n)
{
    int white_n, num_n;
    // print out row by row and print out asterisk when reach index
    for (int row = 0; row < n; row++)
    {
        white_n = n - 1 - row;
        for (int col = 0; col < white_n + 1 + 2 * row; col++)
        {
            if (col >= white_n)
                printf("%d", row + 1);
            else
                printf(" ");
        }
        printf("\n");
    }
}

void print_asterisk4(int n)
{
    int rows = n + 2;
    int num = 1;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < num; col++)
            printf("%d", num);
        printf("\n");
        
        // check if row passed the peak
        num = ((row + 1) >= ((rows + 1) / 2)) ? num - 2 : num + 2;
    }
}

void print_asterisk5(int n)
{
    int rows = n + 2;
    int white_n = n - 1;
    int num = 1;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < white_n + num; col++) {
            if (col >= white_n)
                printf("%d", num);
            else
                printf(" ");

        }
        printf("\n");
        
        // check if row passed the peak
        num = ((row + 1) >= ((rows + 1) / 2)) ? num - 2 : num + 2;
        white_n = ((row + 1) >= ((rows + 1) / 2)) ? white_n + 1 : white_n - 1;
    }
}