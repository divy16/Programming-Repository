#include<stdio.h>
int main()
{
    int n,y;
    printf("Enter number: ");
    scanf("%d",&n);
    y=fib(n);
    printf("%d\n",y);
}
int fib(n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
    {
        return(fib(n-1)+fib(n-2));
    }
}
