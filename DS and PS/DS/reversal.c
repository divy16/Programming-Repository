#include<stdio.h>
int main()
{

    int i,j,n,a,temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr_1[n+1];
    int arr_2[n+1];
    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&arr_1[i]);
    }
    for(i=1;i<=n;i++)
    {
        a=-1-i;
        if(i-a==n)
        {
            break;
        }
        else
        {
            temp=arr_1[a];
            arr_1[a]=arr_1[i];
            arr_1[i]=temp;
        }

    }

    for(int l=0;l<n;l++)
    {
        printf("%d\n",arr_1[l]);
    }


}
