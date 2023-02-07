#include <stdio.h>

int main()
{
    int arr[8] = {33, 67, 50, 50, 40, 60, 65, 35};
    int totalTriplate = 0, x = 140;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            for (int k = j + 1; k <= 7; k++)
            {
                if (x == (arr[i] + arr[j] + arr[k]))
                {
                    totalTriplate++;
                    printf("%d %d %d \n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("%d", totalTriplate);
    return 0;
}