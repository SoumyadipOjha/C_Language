#include <stdio.h>

int main()
{
    int n;
    printf("Enter the length of arrays: ");
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter the element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("the array is: ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}