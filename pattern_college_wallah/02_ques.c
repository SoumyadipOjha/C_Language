#include <stdio.h>

int main()
{
    int n = 6;
    int col = 5;
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}