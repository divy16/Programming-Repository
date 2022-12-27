#include<stdio.h>
int main()
{
    int c[10][10],a[10];
    int i,j;
    printf("A B = A&&B");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            c[i][j]=(i&&j);
            printf("\n%d %d = %d\n",i,j,c[i][j]);
        }
    }
    printf("\n");
    printf("A B = A||B");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            c[i][j]=(i||j);
            printf("\n%d %d = %d\n",i,j,c[i][j]);
        }
    }
    printf("\n");
    printf("A = !A");
    for(i=0;i<=1;i++)
    {
        a[i]=(!i);
        printf("\n%d = %d\n",i,a[i]);
    }
}
