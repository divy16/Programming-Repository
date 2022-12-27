#include<stdio.h>
int main()
{
    int n,y,a;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("Enter exponent: ");
    scanf("%d",&n);
    y=apn(a,n);
    printf("%d\n",y);
}
int apn(a,n)
{
    if(n==1)
        return a;
    else
    {
        return(a*apn(a,n-1));
    }
}
