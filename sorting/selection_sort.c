#include<stdio.h>
#include<stdlib.h>
void selection_sort(int arr[], int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,5);
    return 0;
}
