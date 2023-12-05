#include<stdio.h>
#include<stdlib.h>
#define SIZE 2
void enqueue();
void dequeue();
void show();
void count();
int Queue[SIZE];
int Rear=-1;
int Front=-1;
int main()
{
int ch;
while(1)
{
printf("1. enqueue operation \n");
printf("2. dequeue operation \n");
printf("3. show operation \n");
printf("4. total number of element in the queue \n");
printf("5. exit \n");
printf("enter your choice of operation :");
scanf("%d",&ch);
switch(ch)
{

case 1:
    enqueue();
    break;
case 2:
    dequeue();
    break;
case 3:
    show();
    break;
case 4:
    count();
    break;
case 5:
    exit(0);
default:
    printf("incorrect choice \n");

}}
return 0;
}
void enqueue()
{

    int insertitem;
    if(Rear==SIZE-1)
        printf("overflow \n");
    else
    {

        if(Front==-1)
        Front=0;
    printf("element to be inserted in the queue \n:");
    scanf("%d",&insertitem);
    Rear=Rear+1;
    Queue[Rear]=insertitem;
    }
}
void dequeue()
{

    if(Front==-1 || Front>Rear)
    {

        printf("underflow \n");
        return;
    }
    else
    {
        printf("element deleted from the queue: %d\n",Queue[Front]);
        Front=Front+1;

    }
}
void show()
{


 if(Front==-1)
        printf("empty Queue \n");
        else
        {

            printf("queue:\n");
            for(int i=Front;i<=Rear;i++){
                printf("%d",Queue[i]);
                printf("\n");

            }
        }
}
void count(){
int noe;
if(Front==-1 && Rear==-1)
    printf("Queue id empty");
else
{
    noe=(Rear-Front)+1;
    printf("total number of element are:%d\n",noe);
}
}
