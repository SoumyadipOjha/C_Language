// #include <stdio.h>
// int fun(int arr[])
// {
//     int temp = arr[0];
//     arr[0] = arr[1];
//     arr[1] = temp;
//     return 0;
// }

// int main()
// {
//     int arr[2] = {45, 99};
//     printf("%d %d\n", arr[0], arr[1]);
//     fun(arr);
//     printf("%d %d\n", arr[0], arr[1]);

//     return 0;
//}

// #include <stdio.h>
// int fun(int arr[]){
//     int temp=arr[0];

// }
//     int main(){

// return 0;
// }
#include <stdio.h>
int fun(int arr[])
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return 0;
}

int main()
{
    int arr[2];
    for (int i = 0; i <= 1; i++)
    {
        printf("Enter the element number %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("%d %d\n", arr[0], arr[1]);
    fun(arr);
    printf("%d %d\n", arr[0], arr[1]);

    return 0;
}