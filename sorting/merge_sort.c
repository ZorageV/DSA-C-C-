#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int left,int mid, int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int leftarr[n1],rightarr[n2];
    for(int i=0;i<n1;i++)
    {
        leftarr[i]=arr[i];
    }
    for(int i=0;i<n2;i++)
    {
        rightarr[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=left;
    while (i<n1&&j<n2)
    {
        if(leftarr[i]<rightarr[j])
        {
            arr[k++]=leftarr[i++];
        }
        else
        {
            arr[k++]=rightarr[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=arr[i++];
    }
    while(j<n2)
    {
        arr[k++]=arr[j++];
    }
}
void mergesort(int arr[],int left, int right)
{
    if(left>=right)
    {
        return;
    }
    int mid = left + (right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
}
int main()
{
    int arr[5];
    int n=5;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int left=0,right=n-1;
    mergesort(arr,left,right);
    return 0;
}