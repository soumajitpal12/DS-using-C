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

//int countnode(node *ptr)
//{
//    int count = 0;
//    while(ptr!=NULL)
//    {
//        count++;
//        ptr = ptr->next;
//    }
//    return count;
//}

void dll_insert_end() {
    node *newnode, *temp;
    newnode = getnode();
    if (start == NULL) {
        start = newnode;
    } else {
        temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
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
    dll_insert_end();
    display();
    return 0;
}

