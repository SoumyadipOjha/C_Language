// #include <stdio.h>
// int average(int a, int b, int c);
// int main()
// {
//     int a, b, c;
//     scanf("%d", &a);
//     scanf("%d", &b);
//     scanf("%d", &c);
//     printf("The average of %d %d and %d is %d ", a, b, c, average(a, b, c));

//     return 0;
// }
// int average(int a, int b, int c)
// {
//     int result = (a + b + c) / 3;
//     return result;
// }

/////////////////////////celcius to farenheight//////////////////
// #include <stdio.h>
// float convert(float celcius);
// int main()
// {
//     float celcius;
//     printf("Enter the value in celcius: ");
//     scanf("%f", &celcius);
//     printf("The temp in farenheight is %f degree farenheight", convert(celcius));

//     return 0;
// }
// float convert(float celcius)
// {
//     float result = (celcius * 9) / 5 + 32;
//     return result;
// }

///////////////////////fibonancci series////////////////////
// #include <stdio.h>
// int fibo(int n);
// int main()
// {
//     int n;
//     printf("Enter the range:");
//     scanf("%d", &n);
//     printf("the %d element of fibo series is %d", n, fibo(n));

//     return 0;
// }
// int fibo(int n)
// {
//     if (n == 1 || n == 0)
//     {
//         return 0;
//     }
//     else if (n == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibo(n - 1) + fibo(n - 2);
//     }
// }

#include <stdio.h>
void printpattern(int n);
int main()
{
    int n = 5;
    printpattern(n);

    return 0;
}
void printpattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printpattern(n - 1);
    for (int i = 0; i < (2 * n); i++)
    {
        printf("*");
    }
    printf("\n");
}
