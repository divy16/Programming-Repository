#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int front=0,rear=9;
    int i,c=1;

    while(c>0)
    {
        if (front==rear)
        {
            printf("UNDERFLOW\n");
            break;
        }
        else
        {
            printf("Popped value is : %d\n",arr[front]);
            front=front+1;
            printf("Queue now is: \n");
            for(i=front;i<rear;i++)
            {
                printf("%d\n",arr[i]);
            }
        }
        printf("Do you want to pop more (1 for yes and 0 for no): ");
        scanf("%d",&c);
    }


}
