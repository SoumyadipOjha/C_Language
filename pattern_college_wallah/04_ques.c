#include<stdio.h>
int main()
{
    int n = 6;
    int col = 6;
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= (n + 1) - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
