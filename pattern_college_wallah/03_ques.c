
// #include <stdio.h>

// int main()
// {
//     int n = 6;
//     int col = 5;
//     for (int i = 1; i <= col; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// output
// *
// **
// ***
// ****
// *****





// #include <stdio.h>

// int main()
// {
//     int n = 6;
//     int col = 5;
//     for (int i = 1; i <= col; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//output
// 1
// 22
// 333
// 4444
// 55555



#include <stdio.h>

int main()
{
    int n = 6;
    int col = 5;
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
//output

// 1
// 12
// 123
// 1234
// 123345