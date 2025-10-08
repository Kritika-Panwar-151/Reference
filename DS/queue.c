#include<stdio.h>
#define size 15
int queue[size];
int front=-1,rear=-1;

void enqueue(int n);
void dequeue();
int isempty();
int isfull();
void display();
void main()
{
    char check='y';
    int op;
    int n;
    while(check=='y')
    {
        printf("Enter choice 1:Enqueue 2:Dequeue 3:Display :");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            printf("Enter the element:");
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
            printf("Wrong input");
        }

        
        printf("\nDo you want to continue(y/n):");
        scanf(" %c",&check);
                
    }
}

void enqueue(int n)
{
    if(isempty())
    {
        front++;
        queue[++rear]=n;
    }
    else if(isfull())
    {
        printf("Overflow");
    }
    else
    {
        queue[++rear]=n;
    }
    
}

void dequeue()
{
    int p;
    if(front==-1)
    {
        printf("Underflow");
    }
    else if(front==rear)
    {
        printf("Removed element: %d",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("Removed element: %d",queue[front++]);
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
void display()
{
    printf("Queue:");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}