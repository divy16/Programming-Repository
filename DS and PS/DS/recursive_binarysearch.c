#include<stdio.h>
int main()
{
    int n,y,i;
    int beg,key,end,mid;
    int arr[10];

    beg=0;
    mid=(beg+end)/2;

    printf("Enter number of elements: ");
    scanf("%d",&n);
    end=n;
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


    printf("Enter key: ");
    scanf("%d",&key);
    y=bs(arr[10],key,n,beg,mid,end);
    printf("%d\n",y);
}

int bs(int arr[10],int key,int n,int beg,int mid,int end)
{

    if(key==arr[mid])
        return mid;
    else if(key<arr[mid])
    {
        beg=mid+1;
        mid=(beg+end)/2;
        bs(arr[10],key,n/2,beg,mid,end);
    }
    else
    {
        end=mid-1;
        mid=(beg+end)/2;
        bs(arr[10],key,n/2,beg,mid,end);
    }
}
