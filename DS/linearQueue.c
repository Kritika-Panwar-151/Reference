#include<stdio.h>
#define size 3

int queue[size];
int front=-1,rear=-1;
int isempty();
int isfull();
void enqueue(int n);
void dequeue();
void display();

void main()
{
    char check='y';
    int op;
    int n;
    while(check=='y')
    {
        printf("\nEnter option 1:Enqueue 2:Dequeue 3:Display:");
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
        printf("Do you want to continue?(y/n):");
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
    if(rear==size-1)
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
        queue[++rear]=n;
    }
    else
    {
        queue[++rear]=n;
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
        ++front;
    }
}

void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}
