#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>          //for malloc function
#include<process.h>
void insert_atfirst(int);
void insert_givenposition(int);
void insert_atend(int);
void delete_first();
void delete_last();
void delete_nthnode();
void info_sum();
void count_nodes();
void display();       //for exit function
struct node
{
    int info;
    struct node *next;

};
//typedef struct node;
struct node *first=NULL, *last=NULL;


void main()
{

    int choice;
    int item,pos;
    //clrscr();
    do
    {

        printf("\n MENU OF THE PROGRAM \n");
        printf("1.insert first\n 2.insert at given position \n 3.insert last\n 4.Delete first node\n 5.delete last node\n 6.delete nth node\n 7.info sum\n 8.count nodes\n 9.display items\n 10.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
     case 1:
         printf("enter item to be inserted");
         scanf("%d",&item);
         insert_atfirst(item);
         break;
     case 2:
         printf("enter item to be inserted");
         scanf("%d%d",&item);
         insert_givenposition(item);
         break;
    case 3:
        printf("enter item to be inserted");
        scanf("%d",&item);
        insert_atend(item);
        break;
    case 4:
        delete_first();
        break;
    case 5:
        delete_last();
        break;
    case 6:
        delete_nthnode();
        break;
    case 7:
        info_sum();
        break;
    case 8:
        count_nodes();
        break;
    case 9:
        display();
        break;
    case 10:
        exit(0);
        break;
    default:
          printf("invalid choice\n");
        }
    }while(choice<10);
    getch();
}

void insert_atfirst(int item)
{

    struct node *Newnode;
    Newnode=(struct node*)malloc(sizeof(struct node));
    Newnode->info=item;
    if(first==NULL)
    {
        Newnode->next=NULL;
        first=Newnode;
        last=Newnode;
    }
    else
    {
        Newnode->next=first;
        first=Newnode;
    }
}


void insert_givenposition(int item)
{
    int i=1,pos;
    struct node *Newnode, *temp;
    Newnode->info=item;
    temp=first;

    if(first==NULL)
    {
        printf("Enter position of a node at which you want to insert a new node");
        first=Newnode;
        last=Newnode;
        Newnode->next=NULL;

    }
    else
        {
            printf("Enter position of a node at which you want to insert a new node");
            scanf("%d",&pos);

        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        Newnode->next=temp->next;
        temp->next=Newnode;
    }
}


void insert_atend(int item)
{
    struct node *Newnode;
    Newnode=(struct node*)malloc(sizeof(struct node));
    Newnode->info=item;
    Newnode->next=NULL;
    if(first==NULL)
    {
        first=Newnode;
        last=Newnode;
    }
    else
    {
        last->next=Newnode;
        last=Newnode;
    }
}


void delete_first()
{
    struct node *temp,*head;

    if(head==NULL)
    {
        printf("void deletion\n");
        return;
    }
    else
    {
        temp=head;

        head=head->next;
        temp->next = NULL;
        free(temp);
    }
}


void delete_last()
{
   struct node *hold,*temp,*head;
    if(head==NULL)
    {
        printf("void deletion\n");
        return;
    }
    else if(head->next==NULL)
    {
        hold=head;
        head=NULL;
        free(hold);
    }
    else
    {
        temp=head;
        while(temp->next->next!=NULL)
            temp=temp->next;
        hold=temp->next;
        temp->next=NULL;
        free(hold);
    }
}


void delete_nthnode()
{
    struct node *hold, *temp;
    int pos,i;
    if(first==NULL)
    {
        printf("void deletion\n");
        return;
    }
    else
    {
        temp=first;
        printf("Enter position of node which is to be deleted\n");
        scanf("%d",&pos);
        for(i=1;i<pos-1;i++)
            temp=temp->next;
        hold=temp->next;
        temp->next=hold->next;
        free(hold);
    }
}


void info_sum()
{
    struct node *temp;
    temp=first;
    while(temp!=NULL)
    {
        printf("%d\t",temp->info);
        temp=temp->next;
    }
}



void count_nodes()
{
    int cnt=0;
    struct node *temp;
    temp=first;
    while(temp!=NULL)
    {
        cnt++;
        temp==temp->next;
    }
    printf("total nodes=%d",cnt);
}


void display()
{
    struct node *temp;

    if(first==NULL)
    {
        printf("Empty linked list");
        return;
    }
    else
    {
        temp=first;
        while(temp->next!=NULL)
        {
            printf("Elements are:%d\t",temp->info);
            temp=temp->next;
        }
        printf("Elements are:%d\t",temp->info);
    }
}
