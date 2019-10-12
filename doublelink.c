#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;
};
struct node *root=NULL;
struct node *tail=NULL;
create()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to the node:");
    scanf("%d",temp->data);
    temp->next=NULL;
    temp->pre=NULL;
    if(root==NULL)
    {
        root=temp;
        tail=temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        temp->pre=p;
        tail=temp;
    }

}
display()
{
    if(root==NULL)
        printf("No nodes\n");
    else
    {
        struct node *temp;
        temp=root;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    int i;
    for(i=1;i<=3;i++);
    create();
    display();
    return 0;
}
