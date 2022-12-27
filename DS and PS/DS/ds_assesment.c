#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n;
    printf("************Matrix Transpose************\n");
    printf("Enter number of rows of matrix: ");
    scanf("%d",&m);
    printf("Enter number of cols of matrix: ");
    scanf("%d",&n);
    printf("Enter elements of matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered Matrix is: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%5d",a[j][i]);
        }
        printf("\n");
    }
}
