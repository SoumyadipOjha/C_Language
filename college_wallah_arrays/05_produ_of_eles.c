// #include <stdio.h>

// int main()
// {
//     int i, product = 1;
//     int arr[3] = {1, 2, 3};
//     for (i = 0; i <= 2; i++)
//     {
//         product = product * arr[i];
//     }
//     printf("the product of elements of arrays is: %d", product);
//     return 0;
// }
#include <stdio.h>

int main()
{
    int i, n, product = 1;
    printf("the length of the arrays is : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i <= n - 1; i++)
    {
        printf("the element number %d is : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= n - 1; i++)
    {
        product = product * arr[i];
    }
    printf("the product of the elments of the array is : %d", product);
    return 0;
}