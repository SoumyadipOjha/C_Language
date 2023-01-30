// #include <stdio.h>

// int main()
// {
//     for (int i = 10; i; i--)
//     {
//         printf("10 X %d = %d\n", i, 10 * i);
//     }

//     return 0;
// }
/////////////////////////

// #include <stdio.h>

// int main()
// {
//     int i;
//     printf("Num: ");
//     scanf("%d", &i);

//     for (i = 0; i < 10; i++)
//     {
//         printf("10X %d = %d \n", i, 10 * i);
//     }
//     return 0;
// }

//////////////////////////////sum/////////////////

// #include <stdio.h>

// int main()
// {
//     int a, sum = 0, n;
//     printf("Enter the number: \n");
//     scanf("%d", &n);
//     for (a = 0; a <= n; ++a)
//     {
//         sum += a;
//     }
//     printf("total sum: %d \n", sum);

//     return 0;
// }
////////////////////////////////factorial//////////////
// #include <stdio.h>

// int main()
// {
//     int i = 0, n = 7, factorial = 1;
//     for (i = 1; i <= n; i++)
//     {
//         factorial *= i;
//     }
//     printf("factorial is %d \n", factorial);

//     return 0;
// }

/////////////////////////////////prime number///////////////////

#include <stdio.h>

int main()
{
    int n = 101, prime = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)

        {
            prime = 1;
            break;
        }
    }
    if (prime == 1)
    {
        printf("not a prime\n");
    }
    else
    {
        printf("prime\n");
    }

    return 0;
}