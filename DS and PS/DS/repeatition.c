#include<stdio.h>
int main()
{
    int n,num,temp,a;
    int flag=0;
    int arr[10];
    printf("Enter no. of elemnts in array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter elements of array: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=1;
                a=arr[i];
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("%d\n",a);
    }
    else
    {
        printf("No repeat");
    }

}
