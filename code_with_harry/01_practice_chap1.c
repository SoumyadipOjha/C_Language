// #include <stdio.h>

// int main()
// {
//     int length, breadth;
//     printf("Enter the lenghth\n");
//     scanf("%d", &length);
//     printf("Enter the breadth\n");
//     scanf("%d", &breadth);
//     printf("the area of rectangle is %d", length * breadth);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int radius;
//     float pi = 3.14;
//     int height;
//     printf("Enter the radius :\n");
//     scanf("%d", &radius);
//     printf("Enter the height :\n");
//     scanf("%d", &height);
//     // printf("The area of your circle is %.2f", pi * radius * radius);
//     printf("The volume is %.2f", pi * radius * height);

//     return 0;
// }

// #include <stdio.h>
////////////////////////celcius to farenheight/////////////////////////////////////
// int main()
// {
//     float celcius;
//     printf("the temp in celcius:\n");
//     scanf("%f", &celcius);
//     float cel2 = (celcius * 9) / 5;
//     printf("the temp in farenheight is : %f \n", cel2 + 32);

//     return 0;
// }
///////////////////////////simple interest/////////////////////////////////////////

// #include <stdio.h>

// int main()
// {
//     int initial, rate, time;
//     printf("initial Amount:\n");
//     scanf("%d", &initial);
//     printf("Rate:\n");
//     scanf("%d", &rate);
//     printf("Time:\n");
//     scanf("%d", &time);
//     int total = (initial * (1 + rate * time));
//     printf("Final amount is :%d", total);
//     return 0;
// }
//////////////////////average of numbers/////////////////
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter num1:");
    scanf("%d", &num1);

    printf("Enter num2:");
    scanf("%d", &num2);

    printf("Enter num3:");
    scanf("%d", &num3);
    // int sum = num1 + num2 + num3;
    int mul = num1 * num2 * num3;
    // printf("Average is %d", sum / 3);
    printf(" the multiplication of these numbers are %d it is clear\n", mul);

    return 0;
}
