#include <stdio.h>

int main()
{
    int arr[5] = {3, 4, 5, 6, 76};
    int i;
    for (i = 0; i <= 4; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i] * 2;
        }
        else
        {
            arr[i] = arr[i] * 10;
        }
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("%d", arr[i]);
    return 0;
}