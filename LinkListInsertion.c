#include<stdio.h>
#include<stdlib.h>

struct slinklist
{
    int data;
    struct slinklist *next;
};

typedef struct slinklist node;

node* start = NULL;

node* getnode()
{
    node* newnode = (node*)malloc(sizeof(node));
    printf("\nEnter data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;
}

void createlist(int n)
{
    int i;
    node *newnode;
    node *temp;
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
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
}

void insertatbeg()
{
    node* newnode = getnode();
    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        newnode->next = start;
        start = newnode;
    }
}

void main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    createlist(n);
    insertatbeg();
}

