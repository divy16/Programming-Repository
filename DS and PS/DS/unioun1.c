#include<stdio.h>
int main()
{
    int a[10]={1,2,3,98,5};
    int b[10]={2,3,6,7,8};
    int n=5,m=5,i,j,k=0;
    int c[10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[j]==b[i])
                continue;
            else
            {
                c[i]=a[i];
                k++;
            }
        }
    }
    for(i=k;i<k+n;i++){
        c[i+1]=b[i];
    }
    for(i=0;i<k+n;i++)
    {
        printf("%d\n",c[i]);
    }

}

