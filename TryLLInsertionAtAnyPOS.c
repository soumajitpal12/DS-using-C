#include<stdio.h>
#include<stdlib.h>
struct slinklist
{
 int data;
 struct slinklist *next;
};
typedef struct slinklist node;
node *start = NULL;

node*getnode()
{
 node*newnode;
 newnode =(node*) malloc(sizeof(node));
 printf("\n Enter Data: ");
 scanf("%d",&newnode->data);
 newnode-> next = NULL;
 return newnode;
}

void createlist(int n)
{
 int i;
 node *newnode;
 node *temp;
 for(i=0;i<n;i++)
 {
  newnode = getnode();
  if(start==NULL)
  {
   start = newnode;
  }
  else
  {
    temp = start;
     while(temp->next!=NULL){
     
        temp = temp-> next;
}
   temp-> next = newnode;
  }
 }
}

int countnode(node*ptr)
{
  int count =0;
  while(ptr!=NULL)
  {
    count++;
    ptr = ptr->next;
  }
  return(count);
}

void insert_at_mid()
{
 node *newnode,*temp,*prev;
 int pos, nodectr, ctr=1;
 newnode = getnode();
 printf("\n Enter the position: ");
 scanf("%d",&pos);
 nodectr = countnode(start);
 if(pos>1&&pos<nodectr)
 {
   temp = prev = start;
   while(ctr<pos)
   {
    prev = temp;
    temp = temp->next;
    ctr++;
   }
   prev->next =newnode;
   newnode->next =temp;
 }
 else
 {
  printf("Position %d is not a intermideate position",pos);
 }}
 void display()
{ 
 node *temp;
 temp = start;
 printf("\n The contents of List: \n");
 if(start == NULL )
 printf("\n Empty List");
 else
 { 
 while (temp != NULL)
 {
 printf("%d -> ", temp -> data);
 temp = temp -> next;
 }
 }
} 

void main()
{
 int n;
 if(start == NULL)
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
 insert_at_mid();
 display();
 

}

