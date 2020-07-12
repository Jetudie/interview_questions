#include <stdio.h>

// print out all possible answers
// a + b + c = n, where a, b, c are positive integer numbers
void all_possibile_answer(int sum)
{
    int a, b, c;
    int r;
    // a from 0 to n
    for (a = 0; a <= sum; a++)
    {
        // r = b + c = n - a
        r = sum - a;
        for (b = 0; b < r; b++)
        {
            c = r - b;
            printf("a=%d, b=%d, c=%d\n", a, b, c);
        }
    }
}

int main(int argc, char const *argv[])
{
    all_possibile_answer(10);

    getchar();
    getchar();
    return 0;
}