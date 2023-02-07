// // #include <stdio.h>

// // int main()
// // {
// //     int a = 30;
// //     int b = 45;
// //     printf("%d\n ", a = b);
// //     printf("%d\n ", a < b);
// //     printf("%d\n ", a >= b);
// //     printf("%d\n ", a <= b);
// //     return 0;
// // }

// #include <stdio.h>

// int main()
// {
//     int a = 8;
//     int b = 9;
//     if (a > b)
//     {
//         printf("a is greater");
//     }
//     else
//     {
//         printf("b is greater");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);
    printf("Enter the num3: ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is largest", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is largest", num2);
    }
    else
    {
        printf("%d is greater", num3);
    }
    return 0;
}