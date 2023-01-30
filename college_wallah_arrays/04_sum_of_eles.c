// #include <stdio.h>

// int main()
// {
//     int i;
//     int arr[5] = {1, 2, 3, 4, 5};
//     printf("the sum is : %d", arr[0] + arr[1] + arr[2] + arr[3] + arr[4]);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int i, a, sum = 0;
    int arr[5] = {1, 2, 3, 4, 5};

    for (i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}