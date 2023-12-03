#include <stdio.h>
#define MAX 50

void input(int arr[], int *n);
void print_array(int arr[], int n);
void delete_at_end(int arr[], int *n);
void delete_at_begin(int arr[], int *n);
void delete_at_position(int arr[], int *n, int pos);

int main()
{
    int arr[MAX], n, pos;

    input(arr, &n);
    print_array(arr, n);

    delete_at_end(arr, &n);
    print_array(arr, n);

    delete_at_begin(arr, &n);
    print_array(arr, n);

    printf("Enter the position to delete an element: ");
    scanf("%d", &pos);
    delete_at_position(arr, &n, pos);
    print_array(arr, n);

    return 0;
}

void input(int arr[], int *n)
{
    int i;

    printf("Enter the size of the array (max %d): ", MAX);
    scanf("%d", n);

    printf("Enter the elements of the array:\n");
    for(i=0; i<*n; i++)
        scanf("%d", &arr[i]);
}

void print_array(int arr[], int n)
{
    int i;

    printf("Array: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void delete_at_end(int arr[], int *n)
{
    if(*n <= 0)
        return;

    (*n)--;
    printf("Deleted element: %d\n", arr[*n]);
}

void delete_at_begin(int arr[], int *n)
{
    int i;

    if(*n <= 0)
        return;

    printf("Deleted element: %d\n", arr[0]);

    for(i=0; i<*n-1; i++)
        arr[i] = arr[i+1];

    (*n)--;
}

void delete_at_position(int arr[], int *n, int pos)
{
    int i;

    if(pos < 1 || pos > *n)
    {
        printf("Invalid position\n");
        return;
    }

    printf("Deleted element: %d\n", arr[pos-1]);

    for(i=pos-1; i<*n-1; i++)
        arr[i] = arr[i+1];

    (*n)--;
}

