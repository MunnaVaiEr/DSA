#include<stdio.h>
#include<conio.h>
#include<malloc.h>          //for malloc function
#include<process.h>         //for exit function
struct node
{
    int info;
    struct node *next;

};
typedef struct node NodeType;
NodeType *first, *last;
first=last=NULL;
void insert_atfirst(int);
void insert_givenposition(int);
void insert_atend(int);
void delete_first();
void delete_last();
void delete_nthnode();
void info_sum();
void count_nodes();
void display();
void main()
{

    int choice;
    int item;
    clrscr();
    do
    {

        printf("\n MENU OF THE PROGRAM \n");
        printf("1.insert first\n 2.insert at given position \n 3.insert last\n 4.Delete first node\n 5.delete last node\n 6.delete nth node\n 7.info sum\n 8.count nodes\n 9.display items\n 10.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice);
        {
     case 1:
         printf("enter item to be inserted");
         scanf("%d",&item);
         insert_atfirst(item);
         break;
     case 2:
         printf("enter item to be inserted");
         scanf("%d",&item);
         insert_givenposition(item);
         break;
    case 3:
        printf("enter item to be inserted");
        scanf("%d",&item);
        insert_atend();
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
        exit(1);
        break;
    default:
          printf("invalid choice\n");
        }
    }
    while(choice<10);
    getch();
}

void insert_atfirst(int item)
{

    NodeType *Newnode;
    Newnode=(NodeType*)malloc(sizeof(NodeType));
    if(first==null)
    {
        Newnode->next=null;
        first=newnode;
        last==newnode;
    }
    else
    {
        Newnode->next=first;
        first=Newnode;
    }
}


void insert_givenposition(int item)
{
    int pos,i;
    NodeType *Newnode, *temp;
    newnode->info=item;
    printf("Enter position of a node at which you want to insert a new node");
    scanf("%d",&pos);
    if(first==null);
    {
        first=newnode;
        last=newnode;

    }
    else
    {
        temp=first;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        Newnode->next=temp->next;
        temp->next=Newnode;
    }
}


void insert_atend(int item)
{
    NodeType *NewNode;
    Newnode=(NodeType*)malloc(sizeof(NodeType));
    Newnode->info=item;
    Newnode->next=NULL;
    if(first==null)
    {
        first=newnode;
        last=newnode;
    }
    else
    {
        last->next=newnode;
        last=newnode;
    }
}


void delete_first()
{
    NodeType *temp;
    if(head==NULL)
    {
        printf("void deletion\n");
        return;
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }
}


void delete_last()
{
    NodeType *hold,*temp;
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
    NodeType *hold, *temp;
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
        for(i=1;i<pos-1,i++)
            temp=temp->next;
        hold=temp->next;
        temp->next=hold->next;
        free(hold);
    }
}


void info_sum()
{
    NodeType *temp;
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
    NodeType *temp;
    temp=first;
    while(temp!=NULL)
    {
        cnt++;
        temp==temp->next;
    }
    printf("total nodes=%d",cnt);
}
