#include<stdio.h>
#include<stdlib.h>

 struct slinkedlist{
  int data;
  struct slinkedlist* next;
 };
  typedef struct slinkedlist node;
  node *start=NULL;
int countnode(node *);
  void insert_atmid();
 void printl();
 void createnode(int n);
node*getnode();
int main(){
int ch,n;
while(ch!=4){

printf("\n implement a linked list");
printf("\n1. create a list");
printf("\n2. display a list");
printf("\n3. insert value at mid in a list");
printf("\n4. exit from a list\n");
scanf("%d",&ch);
switch (ch){
case 1:
printf("enter node number  ");
scanf("%d",&n);
createnode(n);
break;
case 2:
printl();
         break;
        case 3:
        insert_atmid();
            break;
        case 4:
        printf("exit");
    break;    
        default:
        printf(" a wrong choice\n ");
        break;
       
}}
//   printl(start);
//   rev(start);
return 0;
   }
 node* getnode(){
  node * newnode;
  newnode=(node*)malloc(sizeof(node));
  printf(" \n enter the data  ");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  return newnode;
  }
 
  void createnode(int n){
  int i;
  node *newnode;
  node*temp;
  for(i=0;i<n;i++){
  newnode=getnode();
  if(start==NULL){
  start=newnode;
 }
 else{
  temp=start;
  while(temp->next!=NULL){
  temp=temp->next;
 }
 temp->next=newnode;
 }
 }
  }
int countnode(node *start){
    int c=0;
  node* temp=start;
//  temp=start;
  while(temp!=NULL){
  c++;
  temp=temp->next;
 }
 return c;
  }
  void insert_atmid(){
  node *newnode,*temp,*prev;
  int pos,nodectr,ctr=1;
  newnode=getnode();
  printf("\n enter the position ");
  scanf("%d",&pos);
  nodectr=countnode(start);
  if(pos>1 && pos<nodectr){
  temp=prev=start;
  while(ctr<pos){
  prev=temp;
  temp=temp->next;
  ctr++;
 
 }
 prev->next=newnode;
 newnode->next=temp;
 }
 else{
  printf("\n position is not an intermediate");
 }
}
  void printl(){
  node* temp=start;
//  temp=start;
  while(temp!=NULL){
  printf("%d-->",temp->data);
  temp=temp->next;
 }
  }
