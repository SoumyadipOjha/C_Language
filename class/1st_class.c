// #include <stdio.h>
// #include <stdbool.h>

// int main()
// {
//     bool age1;

//     printf("the garbage valure of age1 is : %d\n", age1);
//     printf("Memory occupied by bool is: %d\n", sizeof(age1));

//     int age2;
//     printf("the garbage valure of age2 is : %d\n", age2);
//     printf("Memory occupied by int is: %d\n", sizeof(age2));

//     float age3;

//     printf("the garbage valure of age3 is : %f\n", age3);
//     printf("Memory occupied by float is: %d\n", sizeof(age3));

//     char age4;

//     printf("the garbage valure of age4 is : %d\n", age4);
//     printf("Memory occupied by char is: %d\n", sizeof(age4));

//     double age5;

//     printf("the garbage valure of age5 is : %d\n", age5);
//     printf("Memory occupied by double is: %d\n", sizeof(age5));

//     short int age6;

//     printf("the garbage valure of age6 is : %d\n", age6);
//     printf("Memory occupied by short int is: %d\n", sizeof(age6));

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b, c, d, max;
//     printf("zenter the number for a: ");
//     scanf("%d", &a);
//     printf("zenter the number for b: ");
//     scanf("%d", &b);
//     printf("zenter the number for c: ");
//     scanf("%d", &c);
//     printf("zenter the number for d: ");
//     scanf("%d", &d);
//     if (a >= b)
//     {
//         max = a;
//     }
//     else
//     {
//         max = b;
//     }
//     if (max <= c)
//     {
//         max = c;
//     }
//     if (max <= d)
//     {
//         max = d;
//     }
//     printf("%d\n", max);
//     // if (b == c && b == a)
//     // {
//     //     printf("b and a and c are same");
//     // }
//     // else if (a == b)
//     // {
//     //     printf("a and b are same");
//     // }
//     // else if (b == c)
//     // {
//     //     printf("b and c are same");
//     // }
//     // else if (a == c)

//     // {
//     //     printf("a and c are same");
//     // }
//     // else
//     // {
//     //     printf("nothing is same");
//     // }
//     return 0;
// }
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter the num for a: ");
    scanf("%d", &a);
    printf("enter the num for b: ");
    scanf("%d", &b);
    printf("enter the num for c: ");
    scanf("%d", &c);
    printf("enter the num for d: ");
    scanf("%d", &d);
    if (a > b)
    {
        if (b > c)
        {
            if (c > d)
            {
                printf("%d is max", a);
            }
        }
    }
    // if (b > c)
    // {
    //     if (c > d)
    //     {
    //         if (d > a)
    //         {
    //             printf("%d is max", b);
    //         }
    //     }
    // }
    // if (c > d)
    // {
    //     if (d > a)
    //     {
    //         if (a > b)
    //         {
    //             printf("%d is max", c);
    //         }
    //     }
    // }
    // else
    // {
    //     printf("%d is greater", d);
    // }
    return 0;
}