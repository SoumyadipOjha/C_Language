#include <stdio.h>

int main()
{
    int arr[5] = {22, 43, 23, 42, 56};
    int x = 65, totalpair = 0;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = i + 1; j <= 4; j++)
        {
            if (x == (arr[i] + arr[j]))
            {
                totalpair++;
                printf("%d %d \n", arr[i], arr[j]);
            }
        }
    }
    printf("%d", totalpair);
    return 0;
}