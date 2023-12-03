#include<stdio.h>
#include<stdlib.h>
struct slinklist
{
 int data;
 struct slinklist *next;
};
typedef struct slinklist node;
node* struct = NULL;


void createlist(int n)
{
 int i;
 node *newnode;
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
   while(temp-> next!=NULL)
   temp = temp->next;
   temp-> next = newnode;
  }
 }
}
void main()
{

node*getnode()
{
 node*newnode;
 newnode = (node*)malloc(sizeof(node));
 printf("\n Enter data: ");
 scanf("%d",&newnode -> data);
 newnode -> next=NULL;
 return newnode;
}
}
