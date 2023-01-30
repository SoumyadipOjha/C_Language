#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i;
    // int **k= &j;

    printf("%d\n", i);
    printf("%d\n", *j);
    printf("%u\n", &i);
    printf("%u\n", *(&j));
    printf("%u\n", j);

    return 0;
}

/////////////////call by value///
// #include <stdio.h>

// int main()
// {
// int a = 3, b = 4, sum;
// sum = a + b;
// printf("sum: %d", sum);
// return 0;
// }
///////////////call by reference////////
// #include <stdio.h>
// int sum(int a, int b);
// int main()
// {
//     int a = 3, b = 4, sum;
//     sum = a + b;
//     printf("sum: %d", sum);
//     return 0;

//     return 0;
// }
// int sum(int a, int b)
// {
//     int c;
//     c = a + b;
//     b = 3434;
//     c = 23432;
//     return c;
// }

////////////////////////

// #include <stdio.h>
// void swap(int *a, int *b);
// void wrong_swap(int a, int b);
// int main()
// {
//     int x = 3, y = 4;
//     printf("the value of x and y before swap is %d and %d \n", x, y); // call by value....not work
//     wrong_swap(x, y);
//     swap(&x, &y);
//     printf("the value of x and y after swap is %d and %d \n", x, y); // call by reference ,,,will work

//     return 0;
// }
// void wrong_swap(int a, int b)
// {
//     int temp;
//     // a = temp;((((((((((wrong)))))
//     temp = a; // (((((((correct)))))))
//     a = b;
//     b = temp;
// }
// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
