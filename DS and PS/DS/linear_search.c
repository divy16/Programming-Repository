#include<stdio.h>
int main()
{
    int num,n,flag=0,i,temp;
    int arr[10];
    printf("Enter Number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d th element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            printf("Index at which found is: %d\n",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Not found\n");
    }
    printf("This file is made by Divy Junnarkar of CSME-2A \n");
}
