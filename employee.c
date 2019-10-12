//delete from end and at beginning and display the result
#include<stdlib.h>
#include<stdio.h>
struct node
{
    char name[20];
    int age;
    float salary;
    struct node *next;
    struct node *pre;
};
struct node *root=NULL;
struct node *tail=NULL;
create()//insert at beginning
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter name of the employee: ");
    scanf("%s",&temp->name);
    printf("Enter age: ");
    scanf("%d",&temp->age);
    printf("Enter salary: ");
    scanf("%f",&temp->salary);
    temp->next=NULL;
    temp->pre=NULL;
    if(root==NULL)
    {
        root=temp;
        tail=temp;
    }
    else
    {
        root->pre=temp;
        temp->next=root;
        root=temp;
    }

}
display()
{
    if(root==NULL)
        printf("No data is present\n");
    else
    {
        struct node *temp;
        temp=root;
        while(temp!=NULL)
        {
            printf("Name of Employee is %s,age is %d and salary is %f\n",temp->name,temp->age,temp->salary);
            temp=temp->next;
        }
    }
}
deletenode()
{
    if(root==NULL)
        printf("No data is present to delete\n");
    else
    {
        tail=tail->pre;
        free(tail->next);
        tail->next=NULL;
    }
}
int main()
{
    int choice;
    char ch;
    do
    {
        printf("1 for insert the record of employee\n2 for delete the record of last employee\n3 for display the records\n4 for exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create(); break;
            case 2:deletenode(); break;
            case 3:display(); break;
            case 4:return 0;
            default: printf("Wrong choice\n");
        }
        printf("Do u want to continue: ");
        scanf("%c",&ch);
        ch=getchar();
    }
    while(ch=='Y' || ch=='y');
}
