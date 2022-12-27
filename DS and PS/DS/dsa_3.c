#include<stdio.h>
int main()
{
    float arr[10];
    int i,j,n;
    int c=0;
    float avg;
    printf("Enter Number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter marks: ");
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=c+arr[i];
    }
    avg=c/n;
    printf("Average of marks = %f\n",avg);
}
