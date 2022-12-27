#include<stdio.h>
int main()
{
    int a[10][10];
    int b[10][10];
    int c[10][10];
    int n,m,i,j,p,q,k;
    printf("Enter value for n: ");
    scanf("%d",&n);
    printf("Enter value for m: ");
    scanf("%d",&m);
    printf("Enter elements of matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter value for p: ");
    scanf("%d",&p);
    printf("Enter value for q: ");
    scanf("%d",&q);
    printf("Enter elements of matrix: ");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
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
    printf("Result is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%5d",c[i][j]);

        }
        printf("\n");
    }
    printf("This File is made by Divy Junnarkar of CSME-2A \n");
}
