#include<stdio.h>
#include<stdlib.h>
void binary_search_iterative(int arr[],int n,int data);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        printf("size of the array:");
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int data;
        printf("element:");
        scanf("%d",&data);
        binary_search_iterative(arr,n,data);
    }
    return 0;
}
void binary_search_iterative(int arr[],int n,int data)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid= low+(high-low)/2;
        if(arr[mid]==data)
        {
            printf("index of element:%d",mid);
            return;
        }
        else if (arr[mid]>data)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return;
}