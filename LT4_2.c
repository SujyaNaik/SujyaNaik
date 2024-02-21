#include<stdio.h>
char stack[100];
int top = -1;

void push(char x)
{
    stack[++top]=x;
}

char pop()
{
    if(top==-1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x=='(')
        return 0;
    if(x=='+'||x=='-')
        return 1;
    if(x=='*'||x=='/')
        return 2;
}

int main()
{
    char expression[100];
    char *exp,x;
    printf("Enter the expressions : ");
    scanf("%s",expression);
    exp=expression;
    while(*exp!='\0')
    {
        if(isalnum(*exp))
            printf("%c",*exp);
        else if(*exp=='(')
            push(*exp);
        else if(*exp==')')
        {
            while((x=pop())!='(')
                printf("%c",x);
        }
        else
        {
            while(priority(stack[top])>=priority(*exp))
                printf("%c",pop());
            push(*exp);
        }
        exp++;
    }
    while(top!=-1)
    {
        printf("%c",pop());
    }
}
