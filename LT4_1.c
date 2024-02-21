#include<stdio.h>
#include<stdbool.h>

#define MAX_SIZE 5
top=-1;
int stack[MAX_SIZE];
bool isempty();
bool isfull();
void push(int x);
int pop();
void peek();
void main()
{
    isempty();
    isfull();
    push(9);
    push(11);
    push(14);
    push(8);
    pop();
    peek();
}
bool isempty()
{
    if(top==-1)
        return true;
    else
        return false;
}
bool isfull()
{
    if(top==MAX_SIZE-1)
        return true;
    else
        return false;
}
void push(int x)
{
    if(top==MAX_SIZE-1)
        printf("overflow");
    else
        top++;
        stack[top]=x;
        printf("%d is pushed into the stack\n", x);
}
int pop()
{
    int y;
    if(top==-1)
        printf("Underflow");
    else
        y=stack[top];
        top--;
        printf("%d is popped out of the stack\n", y);
        return y;
}
void peek()
{
    int z;
    if(top==-1)
        printf("underflow");
    else
        z=stack[top];
        printf("Top element of the stack is: %d\n", z);
        return z;
}
