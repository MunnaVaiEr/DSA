#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void enqueue_rear();
void enqueue_front();
void dequeue_front();
void dequeue_rear();

void show();
void total();
int DQueue[SIZE];
int Rear=-1;
int Front=-1;
int main()
{
int ch;
while(1)
{
printf("1. enqueue operation from rear \n");
printf("2. enqueue operation from front \n");
printf("3. dequeue operation from front \n");
printf("4. dequeue operation from rear \n");
printf("5. show operation \n");
printf("6. total number of element in the queue \n");
printf("7. exit \n");
printf("enter your choice of operation :\n");
scanf("%d",&ch);
switch(ch)
{

case 1:
    enqueue_rear();
    break;
case 2:
    enqueue_front();
    break;
case 3:
    dequeue_front();
    break;
case 4:
    dequeue_rear();
    break;

case 5:
    show();
    break;
case 6:
   total();
    break;
case 7:
    exit(0);
default:
    printf("incorrect choice \n");

}}
return 0;
}
void enqueue_rear()
{

    int data;
     printf("element to be inserted in the queue \n:");
    scanf("%d",&data);

    if(Front==0 && Rear==SIZE-1)
    printf("queue is full");
    else if(Front==Rear+1)
    printf("queue is full");
    else if(Front==-1 && Rear==-1)
    {

        Front=0;

        Rear=0;

        DQueue[Rear]=data;

    }
    else
    {

        if(Rear!=SIZE-1){
        Rear=Rear+1;
        DQueue[Rear]=data;

        }
        else
        {

            for(int i=Front;i<=Rear;i++)
            {

                DQueue[i-1]=DQueue[i];
                DQueue[Rear]=data;
            }
        }


    }




}

void enqueue_front()
{

    int data;
     printf("element to be inserted in the queue \n:");
    scanf("%d",&data);

    if(Front==0 && Rear==SIZE-1)
    printf("queue is full");
    else if(Front==Rear+1)
    printf("queue is full");
    else if(Front==-1 && Rear==-1)
    {

        Front=0;
        Rear=0;
        DQueue[Front]=data;

    }
    else
    {

        if(Front!=0){

        Front=Front-1;
        DQueue[Front]=data;

        }
        else
        {

            for(int i=Rear;i>=Front;i--)
            {

                DQueue[i+1]=DQueue[i];
                DQueue[Front]=data;
            }
        }

    }




}
void dequeue_front()
{
    int data;

    if(Front==-1 && Rear==-1)
    {

        printf("queue underflow \n");

    }
    else if(Front==Rear)
    {
        data = DQueue[Front];
       Front=-1;
       Rear=-1;
       printf("Deleted element is %d\n",data);
    }
    else
    {

        data=DQueue[Front];
        Front=Front+1;
        printf("Deleted element is %d\n",data);
    }
}

void dequeue_rear()
{
    int data;

    if(Front==-1 && Rear==-1)
    {

        printf("queue underflow \n");

    }
    else if(Front==Rear)
    {
        data = DQueue[Rear];
       Front=-1;
       Rear=-1;
       printf("Deleted element is %d\n",data);
    }
    else
    {

        data=DQueue[Rear];
        Rear=Rear+1;
        printf("Deleted element is %d\n",data);
    }
}
   void show()
{

printf("elements :");
for(int i=Front;i<=Rear;i++){
printf(" %d ",DQueue[i]);
}
}


void total(){
int noe;
if(Front==-1 && Rear==-1)

    printf("Queue id empty");
else
{
    noe=(Rear-Front)+1;
    printf("total number of element are:%d\n",noe);
}
}


