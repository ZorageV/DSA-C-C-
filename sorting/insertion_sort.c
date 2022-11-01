#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int arr[],int n)
{
    for( int i=0;i<n;i++)
    {
        int v=arr[i];
        int j=i;
        while(arr[j-1]>v&&j>=1)
        {
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=v;
    }
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,5);
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}