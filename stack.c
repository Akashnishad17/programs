#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int s[5];
    int top;
}st;
push()
{
    if(st.top>=5)
        printf("Stack is full\n");
    else
    {
        st.top++;
        printf("Enter an element to be inserted:");
        scanf("%d",&st.s[st.top]);
    }
}
int pop()
{
    int i;
    if(st.top==-1)
        printf("Stack is empty\n");
    else
    {
        i=st.s[st.top];
        st.top--;
        printf("Deleted element is %d\n",i);
    }
}
void display()
{
    int i;
    if(st.top==-1)
        printf("Stack is empty\n");
    else
        for(i=st.top;i>=0;i--)
        {
            printf("%d\n",st.s[i]);
        }
}
int main()
{
    int choice;
    char t;
    st.top=-1;
    printf("Implementation of stack\n");
    do
    {
        printf("1 for push\n2 for pop\n3 for display\n4 for exit\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:{push(); break;}
            case 2:{pop(); break;}
            case 3:{display(); break;}
            case 4:{return 0; break;}
            default: printf("Wrong choice\n");
        }
        printf("Do u want to continue\n");
        scanf("%c",&t);
        t=getchar();
    }
    while(t=='y' || t=='Y');
    return 0;
}

