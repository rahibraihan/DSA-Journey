#include <stdio.h>

int main()
{

    int size, i, newElement;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size + 1];

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new element to insert at the last index: ");
    scanf("%d", &newElement);

    arr[size] = newElement;
    size++;

    printf("Updated array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
