#include<stdio.h>
#include<math.h>
/*int main()
{
    int a[10]={5,7,8,10,11,23};
    int b[10];
    int num;
    int i,j,k=0,n=4,temp;
    printf("Enter number: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]>num)
            k++;
    }
    if(k==n)
    {


        a[0]=num;
    }
    else if(k==0)
    {
        a[n]=num;
    }
    else
    {
       for(i=n-1;i>k-1;i--)
        {
            a[i+1]=a[i];
        }
        a[i+1]=num;
    }

    for(i=0;i<n+1;i++)
    {
        printf("%d\n",a[i]);
    }
}*/





int main()
{
    int arr[10][10];
    int i,j,n=3;
    int dig1=0,dig2=0,dif;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                dig1+=arr[i][j];
            }
            if(i+j==n-1)
                dig2+=arr[i][j];
        }
    }
    dif=abs(dig1-dig2);
    printf("%d",dif);

}
