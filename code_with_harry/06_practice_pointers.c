// #include <stdio.h>

// int main()
// {
//     int a = 6;
//     int *ptr;
//     ptr = &a;
//     printf("the address of variable of a is %u\n", &a);
//     printf("the address  of variable of a is %u\n", ptr);
//     printf("the value  of variable of a is %d\n", *ptr);
//     return 0;
// }

#include <stdio.h>
void printadd(int a)
{
    printf("the address of variable a is %u.\n", &a);
}
int main()
{
    int i = 4;
    printf("the address of i is %d\n", i);
    printadd(i);
    printf("the address of i is %u\n", &i);
    return 0;
}