#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
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

    int data;
    if(Front==0 && Rear==SIZE-1)

        {
            printf("queue is full \n");
        }
        else if(Front==Rear+1)
        {
            printf("queue is full \n");


        }
    else
    {


    printf("element to be inserted in the queue \n:");
    scanf("%d",&data);
    Rear=(Rear+1)%SIZE;
    Queue[Rear]=data;
    }
}
void dequeue()
{
    int data;

    if(Front==-1 && Rear==-1)
    {

        printf("queue is empty \n");

    }
    else if(Front==Rear)
    {
        data = Queue[Front];
       Front=-1;
       Rear=-1;
       printf("Deleted element is %d\n",data);
    }
    else
    {

        data=Queue[Front];
        Front=(Front+1)%SIZE;
        printf("Deleted element is %d\n",data);
    }
}
void show()
{
    int i;
        while(i!=Rear){
            i=(i+1)%SIZE;
            printf("element are %d \n",Queue[i]);
        }
        printf("element are%d \n",Queue[Rear]);

}
void count(){
    int count=0,i=Front;
    while(i!=Rear){
        count++;
        i=(i+1)%SIZE;
    }
    printf("total no. of element =%d \n",count+1);



}
