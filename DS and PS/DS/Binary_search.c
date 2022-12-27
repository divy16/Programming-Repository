#include<stdio.h>
int main()
{
    int arr[10];
    int n,num;
    int i,j,tem;
    int beg,mid,end;
    int pos;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d th element:",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    tem=arr[i];
                    arr[i]=arr[j];
                    arr[j]=tem;
                }
            }
        }
    printf("Enter element to be searched: ");
    scanf("%d",&num);
    beg=0;
    end=n;
    mid=(beg+end)/2;
    while(beg<=end && arr[mid]!=num)
    {
        if(num<arr[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(beg+end)/2;
    }
    if(arr[mid]==num)
    {
        pos=mid;
        printf("Index at which found is: %d\n",pos);
    }
    else
        printf("Not Found\n");
    printf("This File is made by Divy Junnarkar of CSME-2A \n");
}
