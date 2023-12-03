#include<stdio.h>
#include<stdlib.h>

struct dlinklist
{
    int data;
    struct dlinklist *prev;
    struct dlinklist *next;
};

typedef struct dlinklist node;
node *start = NULL;

node* getnode()
{
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    printf("\nEnter Data: ");
    scanf("%d",&newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
}

void createlist(int n)
{
    int i;
    node *newnode, *temp;
    for(i=0; i<n; i++)
    {
        newnode = getnode();
        if(start == NULL)
        {
            start = newnode;
        }
        else
        {
            temp = start;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
        }
    }
}

int countnode(node *ptr)
{
    int count = 0;
    while(ptr!=NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}

void insert_at_mid()
{
    node *newnode, *temp, *prev;
    int pos, nodectr, ctr=1;
    newnode = getnode();
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    nodectr = countnode(start);
    if(pos>1 && pos<nodectr)
    {
        temp = prev = start;
        while(ctr<pos)
        {
            prev = temp;
            temp = temp->next;
            ctr++;
        }
        newnode->prev = prev;
        newnode->next = temp;
        prev->next = newnode;
        temp->prev = newnode;
    }
    else
    {
        printf("Position %d is not an intermediate position\n",pos);
    }
}

void display()
{
    node *temp;
    temp = start;
    printf("\nThe contents of List:\n");
    if(start == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d <-> ", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int n;
    if(start == NULL)
    {
        printf("\nNumber of nodes you want to create: ");
        scanf("%d",&n);
        createlist(n);
        printf("\nList Created\n");
    }
    else
    {
        printf("\nList is already created\n");
    }
    display();
    insert_at_mid();
    display();
    return 0;
}

