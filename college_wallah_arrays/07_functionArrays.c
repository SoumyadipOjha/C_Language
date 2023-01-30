#include <stdio.h>
int fun(int arr[])
{
    arr[0] = 1000;
    return 0;
}

int main()
{
    int arr[4] = {10, 34, 45, 65};
    printf("%d\n", arr[0]);
    fun(arr);
    printf("%d", arr[0]);

    return 0;
}