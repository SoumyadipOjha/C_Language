#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool age1;

    printf("the garbage valure of age1 is : %d\n", age1);
    printf("Memory occupied by bool is: %d\n", sizeof(age1));

    int age2;
    printf("the garbage valure of age2 is : %d\n", age2);
    printf("Memory occupied by int is: %d\n", sizeof(age2));

    float age3;

    printf("the garbage valure of age3 is : %f\n", age3);
    printf("Memory occupied by float is: %d\n", sizeof(age3));

    char age4;

    printf("the garbage valure of age4 is : %d\n", age4);
    printf("Memory occupied by char is: %d\n", sizeof(age4));

    double age5;

    printf("the garbage valure of age5 is : %d\n", age5);
    printf("Memory occupied by double is: %d\n", sizeof(age5));

    short int age6;

    printf("the garbage valure of age6 is : %d\n", age6);
    printf("Memory occupied by short int is: %d\n", sizeof(age6));

    return 0;
}