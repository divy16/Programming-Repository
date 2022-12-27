#include<stdio.h>
int main()
{
    int n=10,i;
    int fact=1;
    while(n>0)
    {
        fact=fact*n;
        n=n-1;
    }
    printf("%d",fact);
}
