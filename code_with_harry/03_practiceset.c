// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("enter your number: \n");
//     scanf("%d", &a);
//     if (a >= 11)
//     {
//         printf("i am not 11");
//     }
//     else if (a == 11)
//     {
//         printf("i am 11");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int phy, mth, ch;
    printf("Enter phy marks : \n");
    scanf("%d", &phy);
    printf("Enter mth marks : \n");
    scanf("%d", &mth);
    printf("Enter ch marks : \n");
    scanf("%d", &ch);

    int total;
    total = (phy + mth + ch) / 3;
    if (total >= 40)
    {
        printf("You are pass");
    }
    else if (phy >= 33 && mth >= 33 && ch >= 33)
    {
        printf("You are pass");
    }
    else
    {
        printf("you are fail");
    }

    return 0;
}

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