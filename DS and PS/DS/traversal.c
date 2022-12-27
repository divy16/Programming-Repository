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
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
