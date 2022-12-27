#include<stdio.h>
int main()
{
    int n,mid,num,i;
    int beg=0;
    int end=n;
    printf("Enter no. of elements in the array: ");
    scanf("%d",&n);
    int arr[10];
    for(i=0;i<n;i++)
    {
        printf("Enter %d th element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter number to be searched: ");
    scanf("%d",&num);
    mid=(beg+end)/2;
    if(arr[mid]==num)
    {
        printf("%d\n",mid);
    }
    while(beg<=end)
    {
        if(num>arr[mid])
        {
            beg=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(beg+end)/2;
    }
    if(arr[mid]==num)
    {
        printf("Found \n");
        printf("Index is %d\n",mid);
        printf("Number is %d\n",arr[mid]);
    }
    else
    {
        printf("Not Found!!\n");
    }


}
