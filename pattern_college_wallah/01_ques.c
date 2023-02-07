#include <stdio.h>

int main()
{
    int n;

    printf("Enter the row num : \n", &n);
    scanf("%d", &n);
    int m;

    printf("Enter the col num : \n", &m);
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        for (int i = 1; i <= n; i++)

        {

            printf("* ");
        }
        printf("\n"); // har line ke baad age jane ke liye
    }

    return 0;
}