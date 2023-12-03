#include<stdio.h>
void binary_search(int a[], int n, int key)
{
 int beg, end, mid;
 beg = 0;
 end= n-1;
 mid =(beg+end)/2;
 while( beg<= end && a[mid]!= key)
 {
  if(a[mid]>key)
  end = mid -1;
  else 
     beg = mid +1;
     
     mid =(beg+end)/2;
 }
 
 if(a[mid]==key)
   printf("Sucessfull index: %d", mid);
   
 else 
   printf("Unsucessfull");
   return;
}

int main(){
	 int a[100], n, key, result;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the target value: ");
    scanf("%d", &key);
    binary_search(a,n,key);
    return 0;
}
