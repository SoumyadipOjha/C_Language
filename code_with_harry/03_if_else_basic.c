#include <stdio.h>

int main()
{
    // int a, b;
    // printf("Number:\n");
    // scanf("%d", &a);

    // if (a % 2 == 0)
    // {
    //     printf("Even");
    // }
    // else
    // {
    //     printf("Odd");
    // }
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    // if (age > 45)
    // {
    //     printf("cant drive");
    // }
    // else if (age == 45)
    // {
    //     printf("ohh okk you can drive");
    // }

    // else
    // {
    //     printf("can drive");
    // }
    /////////////////////////one liner/////////////////////////////
    (age == 10) ? printf("you are 10") : printf("A is not 10");
    return 0;
}