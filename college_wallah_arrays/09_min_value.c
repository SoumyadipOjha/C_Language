#include <stdio.h>

int main()
{
    int arr[5] = {187, 2000, 3987, 498, 598};
    int min = 1000;
    for (int i = 0; i <= 4; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        }
    printf("the minimum value is %d", min);
    return 0;
}