#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
void append(int num)
{
    struct node *temp,*right;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    right=(struct node *)head;
    while(right->next!=NULL)
        right=right->next;
    right->next=temp;
    right=temp;
    right->next=NULL;
}
void add(int num)
{

    struct node *temp,*right;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    if(head==NULL)
    {
        head=temp;
        head->next=NULL;
    }
    else
    {
    temp->next=head;
    head=temp;
    }
}
void addafter(int num,int loc)
{
    int i;
    struct node *temp,*left,*right;
    right=head;
    for(i=1;i<loc;i++)
    {
        left=right;
        right=right->next;
    }

    //struct node *temp,*right;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    left=temp;
    left->next=right;
    return;
}
void insert(int num)
{
    int c=0;struct node *temp;
    temp=head;
    if(temp==NULL)
    {
        add(num);
    }
    else
    {
        while(temp!=NULL)
        {
            if(temp->data<num)
                c++;
            temp=temp->next;
        }
        if(c==0)
        add(num);
        else if(c<count())
        addafter(num,++c);
        else
        append(num);
    }
}
int delete(int num)
{
    struct node *temp,*prev;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==num)
        {
            if(temp==head)
            {
                head=temp->next;
                free(temp);
                return 1;
            }
        }
        else
        {
            prev=temp;
            temp=temp->next;
        }
    }
    return 0;
}
void display(struct node *r)
{
    r=head;
    if(r==NULL)
    {
        return;
    }
    while(r!=NULL)
    {
        printf("%d ",r->data);
        r=r->next;
    }
    printf("\n");
}
int count()
{
    struct node *n;
    int c=0;
    n=head;
    while(n!=NULL)
    {
        n=n->next;
        c++;
    }
    return c;
}
int main()
{
    int i,num;
    struct node *n;
    head=NULL;
    while(1)
    {
        printf("\n list Operation.\n");
        printf("==============");
        printf("\n insert.\n");
        printf("\n2 display.\n");
        printf("3.size.\n");
        printf("4.delete.\n");
        printf("5.exit.\n");
        printf("\n enter your choice:\n");
        if(scanf("%d",&i)<=0)
        {
            printf("enter on an integer.\n");
            exit(0);
        }
        else
        {
            switch(i)
            {
                case 1:
                printf("enter the number to be insert:\n");
                scanf("%d",&num);
                insert(num);
                break;
                case 2:if(head==NULL)
                {
                    printf("list is empty.\n");
                }
                else
                {
                    printf("element(s) in the list  are:\n");
                }
                display(n);
                break;
                case 3:printf("size of the list is %d \n",count());
                break;
                case 4: if(head==NULL)
                printf("list is empty\n");
                else
                {
                    printf("enter the number to be delete.\n");
                scanf("%d",&num);
                if(delete(num))
                    printf("%d delete successfully.\n",num);
                else
                    printf("%d is not found in the location.\n",num);
                }
                break;
                case 5:
                    return 0;
                    default:printf("invalid option.\n");
            }
        }
    }
    return 0;
}

