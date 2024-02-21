#include<stdio.h>
int stack[100],top=-1;
void sum();
void difference();
void multiplication();
void division();
void power();
void sum()
{
    int result,x,y;
    x=stack[top];
    top--;
    y=stack[top];
    top--;
    result=x+y;
    top++;
    stack[top]=result;
}
void difference()
{
    int result,x,y;
    x=stack[top];
    top--;
    y=stack[top];
    top--;
    result=x-y;
    top++;
    stack[top]=result;
}
void multiplication()
{
    int result,x,y;
    x=stack[top];
    top--;
    y=stack[top];
    top--;
    result=x*y;
    top++;
    stack[top]=result;
}
void division()
{
    int result,x,y;
    x=stack[top];
    top--;
    y=stack[top];
    top--;
    result=x/y;
    top++;
    stack[top]=result;
}
void power()
{
    int result=1,x,y;
    x=stack[top];
    top--;
    y=stack[top];
    top--;
    for(int i=1;i<y;i++)
    {
        result=result*x;
    }
    top++;
    stack[top]=result;
}
int main()
{
    char exp[100];
    printf("Enter the postfix expression");
    scanf("%s",exp);
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]!=' ')
        {
            switch(exp[i])
            {
                case '+':
                    sum();
                    break;
                case '-':
                    difference();
                    break;
                case '*':
                    multiplication();
                    break;
                case '/':
                    division();
                    break;
                case '^':
                    power();
                    break;
                default:
                    top++;
                    stack[top]=exp[i]-48;
            }
        }
    }
    printf("\nThe result is %d",stack[top]);
}

