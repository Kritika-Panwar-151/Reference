#include<stdio.h>
int stacks[20];
int pointer=-1;
void pop(char op);
void push(char ch);
int main()
{
    char s[20];
    printf("Enter the equation:");
    scanf("%s",s);
    char opd[]="+-/*";
    int c=0;
    for(int i=0;s[i]!='\0';i++)
    {
        for(int j=0;j<4;j++)
    {
        if(s[i]==opd[j])
        {
            pop(s[i]);
            break;
        }
        push(s[i]);
    }
    }
    if(pointer==0)
    {
        printf("The reult is: %d",stacks[0]);
    }
    else
    {
        printf("Wrong Equation1");
    }
}
void pop(char op)
{
    printf(" %d",pointer);

    if(pointer==-1)
    {
        printf("Wrong Equation2");
    }
    else
    {
        int b=stacks[pointer--];
        int a=stacks[pointer--];
        int c;
        switch(op)
        {
            case '+':
                c=a+b;
                break;
            case '-':
                c=a-b;
                break;
            case '*':
                c=a*b;
                break;
            case '/':
                c=a/b;
                break;
            default:
                printf("Wrong Equation3");
        }
        
        stacks[++pointer]=c;
        
    }
}
void push(char ch)
{
    printf("Push=%d,pointer= %d",ch,pointer);
    stacks[++pointer]=(int)ch;
    printf("\nAfter pushing %d pointer= %d",ch,pointer);
}