#include<stdio.h>
int main()
{
    int arr[10];
    int n,i,j,temp;
    int small;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        small=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[small])
            {
                small=j;
            }
        }
        temp=arr[small];
        arr[small]=arr[i];
        arr[i]=temp;
    }
    printf("Sorted array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}
