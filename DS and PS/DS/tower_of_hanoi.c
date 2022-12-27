#include<stdio.h>
int main()
{

    int n,y;
    n=103;
    y=rev(n);
    printf("%d",y);

}
int rev(n)
{
    int temp;
    if(n>0)
    {
        temp=n/10;
        rev(temp);
        return(temp);
        n%=10;
    }

}
