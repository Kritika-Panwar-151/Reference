#include<stdio.h>
int pointer=-1;
char check='y';
void add(int stacks[],int size);
void pop(int stacks[]);
void top(int stacks[]);
void main()
{
    int size;
    int option;
    printf("Enter size of array:");
    scanf("%d",&size);
    int stacks[size];
    while(check=='y')
    {
        printf("\nChoose your option 1:Add 2:Pop 3:Check top element:");
        scanf(" %d",&option);
        switch(option)
        {
        case 1:
            add(stacks,size);
            break;
        case 2:
            pop(stacks);
            break;
        case 3:
            top(stacks);
            break;
        default:
            printf("No such option");


        }
        printf("\nDo you want to continue(y/n):");
        scanf(" %c",&check);
    }


}
void add(int stacks[],int size)
{
    if(pointer+1==size)
    {
        printf("The stack is full");

    }
    else
    {
        int element;
        printf("Enter the element:");
        scanf(" %d",&element);
        stacks[++pointer]=element;

    }

}
void pop(int stacks[])
{
    if(pointer==-1)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("Popped element:%d",stacks[pointer]);
        pointer--;

    }

}
void top(int stacks[])
{
    if(pointer==-1)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("Top element:%d",stacks[pointer]);

    }

}
