// #include <stdio.h>

// int main()
// {
//     int num;
//     printf(" Enter the num: ");
//     scanf("%d", &num);
//     if (num % 97 == 0)
//     {
//         printf("Yes it is divisible by 97 \n");
//     }
//     else
//     {
//         printf("no it is not divisible by 97 \n");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int x, y, z, r, e;
    printf("enter the value of x: \n");
    scanf("%d", &x);
    printf("enter the value of y: \n");
    scanf("%d", &y);
    printf("enter the value of z: \n");
    scanf("%d", &z);
    printf("enter the value of e: \n");
    scanf("%d", &e);

    r = 3 * (x / y) - z + e;
    printf("The answer is : %d", r);
    return 0;
}