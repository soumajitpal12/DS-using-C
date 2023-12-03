#include<stdio.h>
#include<stdlib.h>
struct slinklist
{
  int data;
  struct slinklist *head;
};
typedef struct slinklist node;
node*head = NULL;

node*getnode()
{
  node*newnode;
  newnode = malloc(sizeof(node));
  printf("\nEnter Data: ");
  scanf("%d",&newnode->data);
  newnode->head= NULL;
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
  if(head == NULL)
  {
   head = newnode;
  }
  else
  {
   temp = head;
   while(temp->head!=NULL)
   temp = temp-> head;
   temp-> head = newnode;
  }
 }
}


//void insert_at_end()
//
//{ 
//node *newnode;
//node *temp; 
//newnode = getnode();
//if(head == NULL) 
// { 
// head = newnode; 
// } 
// else 
// { 
// temp = head; 
//while(temp -> head != NULL) 
//temp = temp -> head; 
//temp -> head = newnode; 
// } 
//}

void sorting()
{
    node*ptr = head;
    while (ptr!= NULL)
    {
        node *cpt = ptr ->next;
        while (cpt != NULL)
        {
            if (ptr->data > cpt->data)
            {
                int temp = ptr->data;
                ptr->data = cpt->data;
                cpt->data = temp;
            }
            cpt = cpt->next;
        }
        ptr = ptr->next;
    }
}	


void display()
{ 
 node *temp;
 temp = head;
 printf("\n The contents of List: \n");
 if(head == NULL )
 printf("\n Empty List");
 else
 { 
 while (temp != NULL)
 {
 printf("%d -> ", temp -> data);
 temp = temp -> head;
 }
 }
} 


void main()
{
 int n;
 if(head == NULL)
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
 sorting();
 //insert_at_end();
 display();
 
}
