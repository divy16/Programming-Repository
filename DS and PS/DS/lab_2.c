#include<stdio.h>
int main()
{
    int num,n,j,i,temp;
    int arr[10];
    printf("Enter Number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter marks: ");
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("%d\n",arr[0]);
}
