#include<stdio.h>
int pointer=-1;
char stacks[20];
void push(char ch);
void pop(char ch);
int main()
{
    char s[20];
    printf("Enter the string of parenthesis:");
    scanf("%s",s);
    char open[]="({[";
    char close[]=")}]";
    for(int i=0;s[i]!='\0';i++)
    {
        for(int j=0;j<3;j++)
        {
            
            if(s[i]==open[j])
            {
                
                push(s[i]);
                break;
            }
            if(s[i]==close[j])
            {
                
                pop(s[i]);
                break;
            }
            
        }
    }
    if(pointer==-1)
    {
        printf("Done");
    }
    else
    {
        printf("Wrong Sequence");
    }
}
void push(char ch)
{
    stacks[++pointer]=ch;
}
void pop(char ch)
{
    if(ch==')' && stacks[pointer]=='(')
    {
        --pointer;
    }
    else if(ch=='}' && stacks[pointer]=='{')
    {
        --pointer;
    }
    else if(ch==']' && stacks[pointer]=='[')
    {
        --pointer;
    }
    else
    {
        printf("Wrong Sequence");
    }
}