#include <stdio.h>

int main()
{
    // int rating;
    // printf("enter your rating between 1-5\n");
    // scanf("%d", &rating);
    // switch (rating)
    // {
    // case 1:
    //     printf("your rating is 1\n");
    //     break;
    // case 2:
    //     printf("your rating is 2\n");
    //     break;
    // case 3:
    //     printf("your rating is 3\n");
    //     break;
    // case 4:
    //     printf("your rating is 4\n");
    //     break;
    // case 5:
    //     printf("your rating is 5\n");
    //     break;

    // default:
    //     printf("invalid rating\n");
    //     break;
    // }
    int grade;
    printf("enter you rmarks between 60 to 100:\n");
    scanf("%d", &grade);
    if (grade >= 60 && grade < 70)
    {
        printf("A");
    }

    else if (grade >= 70 && grade < 80)
    {
        printf("B");
    }

    else if (grade >= 80 && grade < 90)
    {
        printf("C");
    }
    else if (grade >= 90 && grade < 100)
    {
        printf("Fail");
    }
    else
    {
        printf(" oohhhhhhhhhh  Bhai tu legend hai");
    }

    return 0;
}