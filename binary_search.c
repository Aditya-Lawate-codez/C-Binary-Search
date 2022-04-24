//
//
/**
 * 1. First sort array using bubble sort;
 *
 *
 *
 */
#include <stdio.h>
// int Bubble_sort_arr(int arr[20])
// {
//     int temp, i;
//     int size;
//     return arr;
// }
int main()
{
    int size, temp, i,flag=0, j, num=10, lftext = 0;
    int arr[10];
    size = sizeof(arr) / sizeof(int);
    int rtext = size - 1;
    printf("Enter a integer array\n");
    for (i = 0; i < size; i++)
    {

        scanf("%d ", &arr[i]);
    }
    // int arr[100] = Bubble_sort_arr(ar);
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    while (flag = 0)
    {
        int found;
        if (num==found){
            printf("Found");
            flag=1;
        }

        if (num > arr[size / 2])
        {
            lftext = size / 2;
            size /= 2;
            found =arr[size/2];
        }
        else
        {
            rtext = size / 2;
            size /= 2;
            found=arr[size/2];
        }
    }
    return 0;
}