#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;

void push();
void pop();
void display();
void Top();

int main()
{
    int choice;
    while(1){
    printf("Enter 1 for push, 2 for pop, 3 for display, 4 for top and 5 for exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        push();
        break;

    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        Top();
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("Wrong choice\n");
    }
}
    return 0;
}

void push()
{
    int m;
    if(top==size-1)
        printf("Stack is full\n");
    else{
        top++;
        printf("Enter data to be pushed\n");
        scanf("%d",&m);

        stack[top]=m;
    }
}

void pop()
{
    int n;
    if(top==-1)
        printf("Stack is empty\n");
    else{
        n=stack[top];

        top--;

        printf("Deleted data is %d\n",n);
    }
}

void display()
{
    if(top==-1)
        printf("stack is empty\n");
    else{
            printf("Stack data are: \n");
        for(int i=size-1;i>0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

void Top()
{
    if(top==-1)
        printf("Stack is empty\n");
    else{
        printf("top of stack is %d\n",stack[top]);
        printf("top index is %d\n",top);
    }
}
