#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue *link;
};
struct queue *front=NULL;
struct queue *rear=NULL;
push()
{
    struct queue *temp;
    temp=(struct queue*)malloc(sizeof(struct queue));
    temp->link=NULL;
    printf("Enter data to the node:");
    scanf("%d",&temp->data);
    if(front==NULL)
    {
        front=temp;
        rear=temp;
    }
    else
    {
        struct queue *p;
        p=front;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
        rear=temp;
    }
}
pop()
{
    if(front==NULL)
        printf("Empty queue\n");
    else
    {
        struct queue *temp;
        temp=front;
        front=temp->link;
        temp->link=NULL;
        printf("Deleted element is %d\n",temp->data);
        free(temp);
    }
}
display()
{
    if(front==NULL)
        printf("Empty queue\n");
    else
    {
        struct queue *temp;
        temp=front;
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
    printf("\t Implementation of queue\n");
    do
    {
        printf("1 for push\n2 for pop\n3 for display\n4 for exit\nEnter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:{push(); break;}
            case 2:{pop(); break;}
            case 3:{display(); break;}
            case 4:{return 0; break;}
            default:{printf("Wrong choice\n");}
        }
        printf("Do u want to continue:");
        scanf("%d",&t);
        system("cls");
    }
    while(t);
}
