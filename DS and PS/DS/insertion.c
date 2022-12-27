#include<stdio.h>
int main()
{
    int num,n,pos,i,temp;
    int arr[10];
    printf("Enter Number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter marks: ");
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be inserted: ");
    scanf("%d",&num);
    printf("Enter position: ");
    scanf("%d",&pos);
    temp=n;
    n++;
    while (n+1>pos)
    {
        arr[n]=arr[n-1];
        n=n-1;
    }
    arr[pos]=num;
    //n=temp;

    n=temp+1;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }


}
