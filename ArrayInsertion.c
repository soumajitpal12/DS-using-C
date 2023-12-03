#include <stdio.h>
#define MAX 50

int arr[MAX], n, i;

void insertAtEnd(int value);
void insertAtBeginning(int value);
void insertAtPos(int pos, int value);
void printArray();

int main()
{
    int pos, value;

    printf("Enter the size of the array (max %d): ", MAX);
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to insert at the end: ");
    scanf("%d", &value);
    insertAtEnd(value);
    printArray();

    printf("Enter the value to insert at the beginning: ");
    scanf("%d", &value);
    insertAtBeginning(value);
    printArray();

    printf("Enter the position to insert the element (1 to %d): ", n+1);
    scanf("%d", &pos);
    printf("Enter the value to insert at position %d: ", pos);
    scanf("%d", &value);
    insertAtPos(pos, value);
    printArray();

    return 0;
}

void insertAtEnd(int value)
{
    arr[n++] = value;
}

void insertAtBeginning(int value)
{
    for(i = n; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = value;
    n++;
}

void insertAtPos(int pos, int value)
{
    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = value;
    n++;
}

void printArray()
{
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

