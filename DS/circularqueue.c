#include<stdio.h>
#define size 3

int queue[size];
int front=-1,rear=-1;

int isfull();
int isempty();
void enqueue(int n);
void dequeue();
void display();

void main()
{
    char check='y';
    int n;
    int op;
    while(check=='y')
    {
        printf("Enter option 1:Enqueue 2:Dequeue 3:Display:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                printf("Enter element:");
                scanf("%d",&n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            default:
                printf("Wrong option");

        }
        printf("Front:%d Rear:%d",front,rear);
        printf("\nDo you want to contineu?(y/n):");
        scanf(" %c",&check);
    }
}

int isempty()
{
    if(front==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull()
{
    if((rear+1)%size==front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(int n)
{
    if(isfull())
    {
        printf("Overflow");
    }
    else if(isempty())
    {
        front=0;
        rear=(rear+1)%size;
        queue[rear]=n;
    }
    else
    {
        rear=(rear+1)%size;
        queue[rear]=n;
    }
}

void dequeue()
{
    if(isempty())
    {
        printf("Underflow");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%size;
    }
}

void display()
{
    int f=front;
    int r=rear;
    do
    {
        printf("%d ",queue[f]);
        f=(f+1)%size;
    }while(f!=(r+1)%size);
}
