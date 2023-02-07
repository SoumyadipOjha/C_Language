// #include <stdio.h>

// int main()
// {
//     int row = 5, col = 5;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }

//         printf("\n");
//     }

//     for (int i = 1; i <= col; i++)
//     {
//         for (int j = 1; j <= (row + 1) - i; j++)
//         {
//             printf("%d", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int row;
    int col;
    printf("Enter the row num: ");
    scanf("%d", &row);
    printf("Enter the col num: ");
    scanf("%d", &col);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= ((row + 1) - i); j++)
        {
            printf("%d", col - i + 1);
        }
        printf("\n");
    }
    return 0;
}