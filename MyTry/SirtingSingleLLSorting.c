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

void sorting()
{
 node *ptr, *cpt;
 int temp;
 ptr = start;
 while(ptr->next!= NULL)
 {
 	cpt= cpt->next;
 	while(cpt!=NULL)
 	{
 		if(ptr->data>cpt->data)
 		{
 		temp = ptr->data;
 		ptr->data= cpt->data;
 		cpt->data = temp;	
		 }
		 cpt= cpt->next;
 		
 	}
	 ptr = ptr->next;
 }
 	
}




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
 printf("\n List before sorting");
 display();
 sorting();
 printf("\n List After sorting");
 display();
 
}
