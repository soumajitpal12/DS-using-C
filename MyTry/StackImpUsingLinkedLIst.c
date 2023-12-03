#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

typedef struct stack node;
node* top = NULL;

node* getnode()
{
    node* newnode = (node*)malloc(sizeof(node));
    printf("\nEnter Data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;
}

void push()
{
    node *newnode = getnode();
    if(top == NULL)
    {
        top = newnode;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
    printf("\n Node Inserted ");
}

void pop()
{ 
    node *temp;
    if(top == NULL) 
    { 
        printf("\n Empty Stack.."); 
        return ; 
    } 
    else 
    { 
        temp = top;
        top = top->next; 
        printf("\n Deleted Node: %d", temp->data);
        free(temp);
    } 
}

void display()
{ 
    node *temp;
    temp = top;
    printf("\n The contents of Stack: \n");
    if(top == NULL )
        printf("\n Empty Stack");
    else
    { 
        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
    }
} 

int main()
{
    int choice;
    do
    {
        printf("\n Stack Operations: ");
        printf("\n 1. Push");
        printf("\n 2. Pop");
        printf("\n 3. Display");
        printf("\n 4. Exit");

        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("\n Invalid Choice! ");
        }
    }while(1);
    return 0;
}

