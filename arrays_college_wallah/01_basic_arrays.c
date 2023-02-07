// #include <stdio.h>

// int main()
// {
//     int arr[5]; // {2, 4, 5, 6, 7};
//     // arr[4] = 133;
//     // printf("%d\n", arr[4]);
//     // printf("%d", arr[6]);
//     printf("Enter first number: ");
//     scanf("%d", &arr[1]);
//     printf("Enter second number: ");
//     scanf("%d", &arr[2]);
//     printf("Enter third number: ");
//     scanf("%d", &arr[3]);
//     printf("Enter fourth number: ");
//     scanf("%d", &arr[4]);
//     printf("Enter fifth number: ");
//     scanf("%d", &arr[5]);

//     printf("%d", arr[3]);

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int arr[3] = {1, 3, 4};
//     for (int i = 0; i <= 2; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int arr[3];
//     for (int i = 0; i <= 2; i++)
//     {
//         printf("Enter element number %d\n", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     printf("%d ", arr[1]);
//     return 0;
// }
/////////////////////for full array printing///////////////
// #include <stdio.h>

// int main()
// {
//     int arr[3];
//     for (int i = 0; i <= 2; i++)
//     {
//         printf("Enter element number %d\n", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i <= 2; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
/////////////
// #include <stdio.h>

// int main()
// {
//     int arr[5];
//     for (int i = 0; i <= 4; i++)
//     {
//         printf("enter the element number %d\n", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     // for(int i =0;-<=4;i++)
//     for (int i = 4; i >= 0; i--)
//     {

//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// include <stdio.h>

// int main()
// {
//     int arr[5] = {1, 3, 4, 5, 5};
//     printf("%p\n", &arr[0]);
//     printf("%p\n", &arr[1]);
//     printf("%p\n", &arr[2]);
//     printf("%p\n", &arr[3]);
//     printf("%p\n", &arr[4]);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num[26], temp;
//     num[0] = 100;
//     num[25] = 200;
//     temp = num[25];
//     num[25] = num[0];
//     num[0] = temp;
//     printf("\n%d %d", num[0], num[25]);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int sub[50], i;
//     for (i = 0; i <= 48; i++)
//     {
//         sub[i] = i;
//         printf("%d ", sub[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i, a = 2, b = 3;
//     int arr[a + b];
//     for (i = 0; i < a + b; i++)
//     {
//         scanf("%d", &arr[i]);
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

//////////////////sum of elements//////////////
// #include <stdio.h>

// int main()
// {
//     int i;
//     int arr[5] = {1, 2, 3, 4, 5};
//     printf("the sum is : %d", arr[0] + arr[1] + arr[2] + arr[3] + arr[4]);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i, a, sum = 0;
//     int arr[5] = {1, 2, 3, 4, 5};

//     for (i = 0; i <= 4; i++)
//     {
//         sum = sum + arr[i];
//     }
//     printf("%d", sum);
//     return 0;
// }
///////////////////product of elements////////////

// #include <stdio.h>

// int main()
// {
//     int i, product = 1;
//     int arr[3] = {1, 2, 3};
//     for (i = 0; i <= 2; i++)
//     {
//         product = product * arr[i];
//     }
//     printf("the product of elements of arrays is: %d", product);product = product * arr[i];
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int i, n, product = 1;
//     printf("the length of the arrays is : ");
//     scanf("%d", &n);
//     int arr[n];
//     for (i = 0; i <= n - 1; i++)
//     {
//         printf("the element number %d is : ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i <= n - 1; i++)
//     {
//         product = product * arr[i];
//     }
//     printf("the product of the elments of the array is : %d", product);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[4] = {3, 45, 46, 47};
//     int max = -1;
//     for (int i = 0; i <= 3; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d ", max);
//     return 0;
// }

////////////////max value/////////
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
//     printf("%d", max);
//     return 0;
// }

/////////

#include <stdio.h>

int main()
{
    int arr[5];
    int i, max = -1;
    for (i = 0; i <= 4; i++)
    {
        printf("Enter the element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The elments of the array is : ");
    for (i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i <= 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\n max number is %d", max);

    return 0;
}