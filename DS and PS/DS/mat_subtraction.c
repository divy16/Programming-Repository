#include<stdio.h>
int main()
{
    int a[10][10];
    int b[10][10];
    int c[10][10];
    int n,m,i,j,p,q;
    printf("Enter value for n: ");
    scanf("%d",&n);
    printf("Enter value for m: ");
    scanf("%d",&m);
    printf("Enter elements of matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Result is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%5d",c[i][j]);

        }
        printf("\n");
    }
    printf("This file is made by Divy Junnarkar of CSME-2A");
}

