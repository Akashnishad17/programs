#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct node *link;
};
struct node *top=NULL;
push()
{
    struct stack *temp;
    temp=(struct stack*)malloc(sizeof(struct stack));
    printf("Enter element:");
    scanf("%d",&temp->data);
  if(top==NULL)
  {
      temp->link=NULL;
      top=temp;
  }
  else if(top!=NULL)
  {
      temp->link=top;
      top=temp;
  }
}
pop()
{
    struct stack *temp;
    if(top==NULL)
        printf("Stack is empty\n");
    else
    {
        temp=top;
        top=temp->link;
        temp->link=NULL;
        printf("Deleted element is %d\n",temp->data);
        free(temp);
    }

}
void display()
{
    struct stack *temp;
    if(top==NULL)
        printf("Stack is empty\n");
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }
    }
}
main()
{
    int n,t;
    printf("\t Implementation of Stack\n");
    do
    {
        printf("1 for Push\n2 for Pop\n3 for Display\n4 for exit\nEnter Your Choice:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:{push(); break;}
            case 2:{pop(); break;}
            case 3:{display(); break;}
            case 4:{return 0; break;}
        }
        printf("Do u want to continue press 1\n");
        scanf("%d",&t);
    }
    while(t);
}
