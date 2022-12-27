#include<stdio.h>
#include<math.h>
int main()
{
    int bin,dec,c=0,b,i=0,temp;
    printf("Enter binary number:");
    scanf("%d",&bin);
    temp=bin;
    while(bin>0)
    {
      bin=bin/10;
      c++;
    }

    bin=temp;
    for(i=0;i<=c;i++)
    {
        b=bin%10;

        dec=dec+b*pow(2,i);

        bin=bin/10;

    }
    printf("Decimal equivalent is %d\n",dec);
    return 0;
}
