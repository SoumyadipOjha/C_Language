#include <stdio.h>
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
