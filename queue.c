#include<stdio.h>
#include<stdlib.h>
int a[5],rear=-1,front=-1;
insert()
{
    int item;
    if(rear==4)
        printf("Overflow\n");
    else if(front==-1)
    {
    front=0;
    printf("Enter element");
    scanf("%d",&item);
    rear++;
    a[rear]=item;
    }
    else
    {
    printf("Enter element");
    scanf("%d",&item);
    rear++;
    a[rear]=item;
    }
}
deleting()
{
    if(front==-1 || front>rear)
        printf("Underflow\n");
    else
    {
        printf("Deleted element is %d\n",a[front]);
        front++;
    }
}
display()
{
    int i;
    if(rear==-1 || front>rear)
        printf("Empty queue\n");
    else
        for(i=front;i<=rear;i++)
        printf("%d\n",a[i]);
}
main()
{
    int choice,t;
    do
    {
        printf("1 for Insert\n2 for Delete\n3 for Display\n4 for exit\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: {insert(); break;}
        case 2: {deleting(); break;}
        case 3: {display(); break;}
        case 4: {return 0; break;}
        default : {printf("Wrong your choice\n");}
        }
        printf("Do u want to continue press 1\n");
        scanf("%d",&t);
        system("cls");
    }
    while(t);
    return 0;
}

