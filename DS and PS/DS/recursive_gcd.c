#include<stdio.h>
int main()
{
    int b,y,a;
    printf("Enter number1: ");
    scanf("%d",&a);
    printf("Enter number2: ");
    scanf("%d",&b);
    y=gcd(a,b);
    printf("%d\n",y);
}
int gcd(a,b)
{
    if(a%b==0)
        return b;
    else
    {
        return(gcd(b,a%b));
    }
}
