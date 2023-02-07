// #include <stdio.h>

// int main()
// {
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//     int max = -1;
//     for (int i = 0; i <= 6; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d", max);
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int arr[8];
//     int i, max = -1;

//     for (i = 0; i <= 7; i++)
//     {
//         printf("Enter the element number %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i <= 7; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("the max value is: ");
//     printf("%d", max);
//     return 0;
// }

#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int i, max = INT_MIN;
    for (i = 0; i <= 3; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);

    return 0;
}