#include<stdio.h>

int toh(int,int,int,int);

int main()
{
    int n,A=1,B=2,C=3;
    printf("Enter number of discs: ");
    scanf("%d",&n);
    toh(n,A,B,C);
}
int toh(n,A,B,C)
{
    if(n>0)
    {
        toh(n-1,A,C,B);
        printf("Move disk from %d to %d\n",A,C);
        toh(n-1,B,A,C);
    }
}
