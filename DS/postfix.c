#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define size 15
char stacks[size];
char postfix[size];
char s[size];
int pointer=-1;
int i=-1;


void push(char e);
char pop();
int isempty();
int isfull();
int pr(char op);
int main()
{
    
    printf("Enter the equation:");
    scanf("%s",s);
    int j=0;
    while(s[j]!='\0')
    {

        char ch=s[j];

        if(isalnum(ch))
        {

            postfix[++i]=ch;
        }
        else if(ch=='(')
        {   
            push(ch);
        }
        else if(ch==')')
        {
            while(stacks[pointer]!='(')
            {
                postfix[++i]=pop();
            }
            pop();
        }
        else
        {
            while(!isempty() && pr(stacks[pointer])>=pr(ch) )
            {
                postfix[++i]=pop();
            }
            push(ch);

        }
        j++;
    }

    while(pointer!=-1)
    {
        postfix[++i]=pop();
    }
    postfix[++i]='\0';
    printf("Postfix:%s",postfix);

}

void push(char e)
{
    if(!isfull())
    {
        stacks[++pointer]=e;
    }
}
char pop()
{
    if(!isempty())
    {
        return stacks[pointer--];
    }
    else
    {
        exit(0);
    }
}
int isempty()
{
    if(pointer==-1)
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
    if(pointer==size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pr(char op)
{
    if(op=='(' || op==')')
    {
        return -1;
    }
    else if(op=='+' || op=='-')
    {
        return 0;
    }
    else if(op=='*' || op=='/')
    {
        return 1;
    }
    else if(op=='^')
    {
        return 2;
    }
    else
    {
        printf("Wrong operator");
        exit(0);
    }
}

