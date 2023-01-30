// #include <stdio.h>
// void display(); // function prototype

// int main()
// {
//     printf("this is initializing display\n");
//     display(); ////function call
//     printf("display finished its work\n");

//     return 0;
// }
// ////function defination
// void display()
// {
//     printf("This is display\n");
// }

// #include <stdio.h>
// void goodmorning();
// void goodafternoon();
// void goodnight();

// int main()
// {
//     goodmorning();
//     goodafternoon();
//     goodnight();
//     return 0;
// }

// void goodmorning()
// {
//     printf("hello soumya good morning\n");
// }
// void goodafternoon()
// {
//     printf("hello soumya good afternoon\n");
// }
// void goodnight()
// {
//     printf("hello soumya good night\n");
// }

// #include <stdio.h>
// int sum(int a, int b);
// int main()
// {
//     int c, x, y;
//     printf("X: \n");
//     scanf("%d", &x);
//     printf("Y: \n");
//     scanf("%d", &y);

//     c = sum(x, y);
//     printf("the sum is %d", c);
//     return 0;
// }
// int sum(int a, int b)

// {
//     int result;
//     result = a + b;
//     return result;
// }

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Enter the value: \n");
    scanf("%d", &a);
    printf("Area: %f", pow(a, 2));

    return 0;
}
