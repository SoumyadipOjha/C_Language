#include <stdio.h>

int main()
{
    int arr[5] = {2, 345, 65, 17, 43};
    int i, count = 0;
    for (i = 0; i <= 4; i++)
    {
        if (arr[i] > 100)
        {
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}