#include <stdio.h>

int main()
{
    int arr[5] = {29, 33, 54, 45, 36};
    int i, sumeven = 0, sumodd = 0;
    for (i = 0; i <= 4; i++)
    {
        if (i % 2 == 0)
        {
            sumeven += arr[i];
        }
        else
        {
            sumodd += arr[i];
        }
    }
    printf("%d ", sumeven - sumodd);

    return 0;
}