#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 7};
    int max = INT_MIN;
    int s_max = -1;
    for (int i = 0; i <= 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            s_max = max;
        }
        else if (s_max < arr[i] && max != arr[i])
        {
            s_max = arr[i];
        }
        else
        {
            printf("");
        }
    }
    printf("%d", s_max);
    return 0;
}