#include<stdio.h>
int main()
{
    int pow,num,i,temp;
    printf("Enter base number: ");
    scanf("%d",&num);
    printf("Enter power number: ");
    scanf("%d",&pow);
    for(i=1;i<pow;i++)
    {
        temp=1;
        num*=temp;
        temp=num;

    }
    printf("%d\n",num);

}
