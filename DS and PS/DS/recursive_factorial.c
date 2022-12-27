#include<stdio.h>
int main()
{
    int n,f;
    printf("Enter number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("%d\n",f);
}
int fact(n)
{
    if (n==0||n==1)
        return 1;
    else
    {
        return(n*fact(n-1));
    }
}

