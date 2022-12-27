#include<stdio.h>
int main()
{
    int arr[5];
    int front=0,rear=0;
    int val,c=1,i;
    while(c>0)
    {

        if(front==0 && rear==4){
            printf("OVERFLOW\n");
            break;
        }
        else
        {
            printf("Value to push: ");
            scanf("%d",&val);
            arr[rear]=val;
            rear=rear+1;
        }
        printf("Do you want to push again(1 for yes and 0 for no) :");
        scanf("%d",&c);

    }
    for(i=0;i<rear;i++)
    {
        printf("%d\n",arr[i]);
    }

}
