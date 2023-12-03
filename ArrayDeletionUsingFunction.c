#include <stdio.h>
#define MAX 50

//void input(int arr[], int *n)


void delete_element(int arr[], int n)
{
    int i, pos;

    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n)
        printf("Invalid position");
    else
    {
        for(i=pos-1; i<n-1; i++)
            arr[i] = arr[i+1];

        (n)--;
}
        printf("Array after deletion:\n");
        for(i=0; i<n; i++)
            printf("%d ", arr[i]);
    
}

int main()
{
    int arr[MAX], n,i;

     printf("Enter the size of the array (max %d): ",MAX);
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    delete_element(arr, n);

    return 0;
}

