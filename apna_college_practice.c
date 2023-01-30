/////////////////////////1///////////////////////////

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("enter the side of rectengle: ");
//     scanf("%d", &a);
//     printf("the area of the rectengle is: %d", a * a);
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

//  #include <stdio.h>
// ////////////////////////celcius to farenheight/////////////////////////////////////
//  int main()
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
//     scanf("%d", &initial);100
//     printf("Rate:\n");
//     scanf("%d", &rate);
//     printf("Time:\n");
//     scanf("%d", &time);
//     int total = (initial * (1 + rate * time));
//     printf("Final amount is :%d", total);
//     return 0;
// }
//////////////////////average of numbers/////////////////
// #include <stdio.h>

// int main()
// {
//     int num1, num2, num3;
//     printf("Enter num1:");
//     scanf("%d", &num1);

//     printf("Enter num2:");
//     scanf("%d", &num2);

//     printf("Enter num3:");
//     scanf("%d", &num3);
//     // int sum = num1 + num2 + num3;
//     int mul = num1 * num2 * num3;
//     // printf("Average is %d", sum / 3);
//     printf(" the multiplication of these numbers are %d it is clear\n", mul);

//     return 0;
// }
///////////////////////////////2////////////////////////////////
// #include <stdio.h>

// int main()
// {
//     int num;
//     printf(" Enter the num: ");
//     scanf("%d", &num);
//     if (num % 97 == 0)
//     {
//         printf("Yes it is divisible by 97 \n");
//     }
//     else
//     {
//         printf("no it is not divisible by 97 \n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int x, y, z, r, e;
//     printf("enter the value of x: \n");
//     scanf("%d", &x);
//     printf("enter the value of y: \n");
//     scanf("%d", &y);
//     printf("enter the value of z: \n");
//     scanf("%d", &z);
//     printf("enter the value of e: \n");
//     scanf("%d", &e);

//     r = 3 * (x / y) - z + e;
//     printf("The answer is : %d", r);
//     return 0;
// }

/////////////////////////////////3//////////////////////////////

// #include <stdio.h>

// int main()
// {
//     int a = 10;
//     if (a == 11) ////////////// in c ""="" represents the value of no zero....and ""=="" check the real value
//     {
//         printf("yes");
//     }
//     else
//     {
//         printf("No");
//     }

//     return 0;
// }

/////////////////////////////3/////////////////////////

/////////////////pass fail/////////////////
// #include <stdio.h>

// int main()
// {
//     int math, phy, chy, total;
//     printf("Enter the number of math: \n");
//     scanf("%d", &math);

//     printf("Enter the number of phy: \n");
//     scanf("%d", &phy);

//     printf("Enter the number of chy: \n");
//     scanf("%d", &chy);

//     total = math + phy + chy;

//     if (math >= 33 && phy >= 33 && chy >= 33 || total >= 40)
//     {
//         printf("You have passed");
//     }
//     else
//     {
//         printf("You have failed");
//     }
//     return 0;
// }

//////////////////////normal interest////////////////////

// #include <stdio.h>

// int main()
// {
//     float tax = 0, income;
//     printf("income");
//     scanf("%f", &income);
//     if (income >= 250000 && income <= 500000)
//     {
//         tax = tax + 0.05 * (income - 250000);
//     }
//     if (income >= 500000 && income <= 1000000)
//     {
//         tax = tax + 0.20 * (income - 500000);
//     }
//     if (income >= 1000000)
//     {
//         tax = tax + 0.30 * (income - 1000000);
//     }
//     printf("%f", tax);

//     return 0;
// }
/////////////////leap year///////////////////

// #include <stdio.h>

// int main()
// {
//     int year;
//     printf("Enter the year: \n");
//     scanf("%d", &year);

//     if (year % 400 == 0)
//     {
//         printf("its a leapyear\n");
//     }
//     else if (year % 100 == 0)
//     {
//         printf("its not a leapyear\n");
//     }
//     else if (year % 4 == 0)
//     {
//         printf("its a leapyear\n");
//     }

//     else
//     {
//         printf("its not a leapyear.\n");
//     }
//     return 0;
// }
///////////////////LOWERCASE////////////////
// #include <stdio.h>

// int main()
// {
//     char ch;
//     printf("Enter the ch: \n");
//     scanf("%c", &ch);
//     if (ch >= 97 && ch <= 122)
//     {
//         printf("%c is lowercase");
//     }
//     else
//     {
//         printf("%c is not lowercase.");
//     }
//     return 0;
// }
//////////////////////largest number wrong code////////////////////////

// #include <stdio.h>

// int main()
// {
//     int a, b, c, d;
//     printf("Enter the a num:");
//     scanf("%d", &a);
//     printf("Enter the b num:");
//     scanf("%d", &b);
//     printf("Enter the c num:");
//     scanf("%d", &c);
//     printf("Enter the d num:");
//     scanf("%d", &d);

//     if (a > b && a > c && a > d)
//     {
//         printf("a is the largest");
//     }
//     else if (b > a && b > c && b > d)
//     {
//         printf("b is the largest");
//     }
//     else if (c > b && a < c && c > d)
//     {
//         printf("c is the largest");
//     }
//     else
//     {
//         printf("d is the largest");
//     }
//     return 0;
// }
////////////////////4///////////////////////////

/////multiplication table///////////////////

// #include <stdio.h>

// int main()
// {
//     int i;
//     printf("Num: ");
//     scanf("%d", &i);

//     for (i; i <= 20; i++) /// 1st is initial...... 2nd i is limit....3rd i is for increasing the value
//     {
//         printf("10X %d = %d \n", i, 10 * i);
//     }

//     return 0;
// }
////////////////////////////
// #include <stdio.h>

// int main()
// {
//     int i;
//     printf("the multiplication table is : \n");
//     for (i = 12; i; i--)
//     {

//         printf("10 * %d = %d\n", i, 10 * i);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int i, sum = 0, n = 10;
    printf("the sum is %d");
    for (i = 0; i <= n; ++i)
    {
        sum += i;
        printf("%d", sum);
    }

    return 0;
}

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