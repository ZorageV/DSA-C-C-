#include<stdio.h>
#include<stdlib.h>
int num=0;
int binary_search_recurrsive(int arr[],int n, int low ,int high,int data);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        printf("size of array");
        scanf("%d",&n);
        int low=0;
        int high=n-1;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("element:");
        int data;
        scanf("%d",&data);
        int m=binary_search_recurrsive(arr,n,low,high,data);
        if(m==-1)
        {
            printf("element not found");
        }
        else
        {
        printf("index of element%d\n",m);
        }
        printf("noumber of iterations is %d",num);
    }
    return 0;
}
int binary_search_recurrsive(int arr[],int n,int low,int high,int data)
{
    if(low>high)
    {
        return -1;
    }
    int mid= low+ (high-low)/2;
    if(arr[mid]==data)
    {
        return mid;
    }
    else if (arr[mid]>data)
    {
        num++;
        return binary_search_recurrsive(arr,n,low,mid-1,data);
    }
    num++;
    return binary_search_recurrsive(arr,n,mid+1,high,data);
}

