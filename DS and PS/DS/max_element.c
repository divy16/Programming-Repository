#include<stdio.h>
int main()
{
    int a[10];
    int i,n,j,temp;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Max element is: %d\n",a[n-1]);
    printf("This File is made by Divy Junnrakar of CSME-2A \n");
}
