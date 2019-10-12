#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root=NULL;
void create()     //this also acts as insert at end
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to the node\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
        root=temp;
    else
    {
        struct node *p;
        p=root;
        while(p->link!=NULL)
        p=p->link;
        p->link=temp;
    }
}
insertatbeg()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to the node\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
        if(root==NULL)
            root=temp;
        else
        {
            temp->link=root;
            root=temp;
        }
        return 0;
}
int length()
{
    struct node *temp;
    temp=root;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->link;
        count++;
    }
    return count;
}
addatafter(int l)
{
    struct node *temp,*p;
    int loc,count=1;
    printf("Enter location:");
    scanf("%d",&loc);
    if(loc>l)
        printf("Invalid Location\nAvailable location is %d",l);
    else
    {
        p=root;
        while(count<loc)
        {
            p=p->link;
            count++;
        }
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter data to the node:");
        scanf("%d",&temp->data);
        temp->link=p->link;
        p->link=temp;
    }
}
void display()
{
    struct node *temp;
    temp=root;
    if(temp==NULL)
        printf("No node\n");
    else
        while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
}
reverse(int l) //passing the value of length
{
    int i,j,t;
    t=l;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=root;
    if(temp==NULL)
        printf("No nodes\n");
    else
    {
    for(j=1;j<=t;j++)
        {
            for(i=1;i<l;i++)
            {
                temp=temp->link;
            }
                printf("%d\n",temp->data);
                l--;
                temp=root;
        }
    }
}
deletenode()
{
    struct node *temp,*p;
    int n,count=1;
    temp=root;
    p=temp->link;
    if(temp==NULL)
        printf("No nodes to delete\n");
    else
    {
        printf("Enter the location of the node to be deleted:");
        scanf("%d",&n);
    if(n>length())
        printf("Invalid node\nAvailable nodes are %d\n",length());
    else if(n==1)
    {
        temp=root;
        root=temp->link;
        printf("The deleted node value is %d\n",temp->data);
        temp->link=NULL;
        free(temp);
    }
    else
    {
        while(count<n-1)
        {
          temp=temp->link;
          p=temp->link;
          count++;
        }
        temp->link=p->link;
        printf("\nThe deleted node value is %d\n",p->data);
        p->link=NULL;
        free(p);
    }
    }
}
void sort()
{
    struct node *temp,*p,*q;
    temp=root;
    int t;
    if(temp==NULL)
        printf("No nodes to sort\n");
    else
    for(p=temp;p->link!=NULL;p=p->link)
    {
        for(q=p->link;q!=NULL;q=q->link)
        {
            if(p->data>q->data)
            {
                t=p->data;
                p->data=q->data;
                q->data=t;
            }
        }
    }
}
int main()
{
    int n,l=0,t;
    printf("\t Implementation of Linked list\n");
    do
    {
    printf("1 for create\n2 for insert at beginning\n3 for insert at after\n4 for display\n5 for deleting a node\n6 for reversing the list\n7 for sorting the list\n8 for exit\n");
    printf("Enter your choice:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:{create(); l=length(); break;}
        case 2:{insertatbeg(); l=length(); break;}
        case 3:{addatafter(l); l=length(); break;}
        case 4:{display(); break;}
        case 5:{deletenode(); l=length(); break;}
        case 6:{reverse(l); l=length(); break;}
        case 7:{sort(); break;}
        case 8:{return 0;}
        default :printf("You have entered wrong choice\n");
    }
    printf("Do you want to continue press 1\n");
    scanf("%d",&t);
    system("cls");
    }
    while(t);
    return 0;
}
