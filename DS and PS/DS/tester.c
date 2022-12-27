#include <stdio.h>
int binsearch()
{
    printf("\n******Binary Search*******\n");
    int a[10],n,i,num;
    int mid,beg,end;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched: ");
    scanf("%d",&num);
    beg=0;
    end=n;
    mid=(beg+end)/2;
    while(beg<end && a[mid]!=num)
    {
        if(a[mid]>num)
            end=mid-1;
        else
            beg=mid+1;
        mid=(beg+end)/2;
    }
    if(a[mid]==num)
        printf("Element is found at index: %d\n",mid);
    else
        printf("Not found\n");
}

int linear()
{
    printf("*******Linear Search*********\n");
    printf("Enter number of elements: ");
    int a[10],i,n,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elements: ");
        scanf("%d",&a[i]);
    }
    printf("Enter number to be searched: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
            printf("Element is found at index: %d",i);
    }
}
int multiply_mat()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,p,q,i,j,k;
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&p);
    scanf("%d",&q);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<m;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%5d",c[i][j]);
        }
        printf("\n");
    }


}
int main()
{
    multiply_mat();
}

