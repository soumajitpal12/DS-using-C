#include<stdio.h>
#include<stdlib.h>
struct slinklist
{
  int data;
  struct slinklist *ptr;
  
};
typedef struct slinklist node;
node*ptr = NULL;

node*getnode()
{
  node*newnode;
  newnode = malloc(sizeof(node));
  printf("\nEnter Data: ");
  scanf("%d", &newnode->data);
  newnode-> ptr= NULL;
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
  if(ptr== NULL)
  {
  	ptr = newnode;
  	
  }
  else
  {
  	temp= ptr;
  	while(temp->ptr!=NULL)
  	temp = temp->ptr;
  	temp->ptr= newnode;
  }
 }
 
}

void insert_at_end()
{
{ 
node *newnode;
node *temp; 
newnode = getnode();
if(ptr == NULL) 
 { 
 ptr = newnode; 
 } 
 else 
 { 
 temp = ptr; 
while(temp -> ptr != NULL) 
temp = temp -> ptr; 
temp -> ptr = newnode; 
 } 
}	
}


void display()
{ 
 node *temp;
 temp = ptr;
 printf("\n The contents of List: \n");
 if(ptr == NULL )
 printf("\n Empty List");
 else
 { 
 while (temp != NULL)

{
 printf("%d -> ", temp -> data);
 temp = temp -> ptr;
 }
 }
} 


void main()
{
 int n;
 if(ptr == NULL)
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
 insert_at_end();
 display();
 
}

