#include<stdio.h>
int a[50],n,i;
void del_end();
void del_beg();
void del_anypos(int pos);
void printarray();
void main()
{
 int pos;
 printf("\n How many ele: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 
 printf("\n Delete the elm from end and print: ");
 del_end();
 printarray();
 
  printf("\n Delete the elm from beg and print: ");
 del_beg();
 printarray();
 
  printf("\n Enter the position want to delete: ");
  scanf("%d",&pos);
 del_anypos(pos);
 printarray();
}

void printarray()
{
 for(i=0;i<n;i++){
 	printf("%d",a[i]);
 }
}

void del_end()
{
 n--;
 return;
}

void del_beg()
{
 for(i=0;i<n-1;i++){
 	a[i]= a[i+1];
 }
 n--;
}

void del_anypos(int pos)
{
 for(i=pos-1;i<n-1;i++)
 {
  a[i]= a[i+1];
 }
 n--;
}
