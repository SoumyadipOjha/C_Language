#include <stdio.h>
#include <math.h>
int main()
{
    int a = 4;
    int b = 3;
    int p = 3.0 / 9;
    printf("The Value of a+b is: %d\n", a + b);
    printf("The Value of a-b is: %d\n", a - b);
    printf("The Value of a%b is: %d\n", a % b);
    printf("The Value of a^b is: %f\n", pow(a, b));
    printf("The Value of k is: %f\n", p);

    return 0;
}