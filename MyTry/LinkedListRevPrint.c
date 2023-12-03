//Linklisted Insertion At Begnning
#include<stdio.h>
#include<stdlib.h>
struct slinklist
{
 int data;
 struct slinklist *next;
};
typedef struct slinklist node;
node*start = NULL;

node*getnode()
{
 node*newnode;
 newnode=malloc(sizeof(node));
 printf("\nEnter Data: ");
 scanf("%d",&newnode->data);
 newnode -> next = NULL;
 return newnode;
}
void createlist(int n)
{
 int i;
 node*newnode;
 node*temp;
 for(i=0;i<n;i++)
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
   temp = temp-> next;
   temp-> next = newnode;
  }
 }
}

void reverse_display()
{
    node* current = start;
    node* prev = NULL;
    node* next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    printf("\n The contents of List in reverse order: \n");
    while (prev != NULL)
    {
        printf("%d -> ", prev->data);
        prev = prev->next;
    }
}


//void print_reverse(node *p) {
//    if (p == NULL)
//        return;
//    print_reverse(p->next);
//    printf("%d -> ", p->data);
//}


void display()
{ 
 node *temp;
 temp = start;
 printf("\n The contents of List: \n");
 if(start==NULL)
 printf("\n Empty List");
 else
 { 
 while (temp!=NULL)
 {
 printf("%d -> ", temp->data);
 temp = temp->next;
 }
 }
} 

void main()
{
 int n;
 if(start==NULL)
 {
  printf("\n Number of nodes you want to create: ");
  scanf("%d",&n);
  createlist(n);
  printf("\n List Created");
 }
 else
 {
  printf("\n List is already created");
 }
 display();
  printf("\n Reversed List: \n");
    //print_reverse(start);
    reverse_display();
    printf("NULL");
 
}
