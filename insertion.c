#include <stdio.h>
int main()
{
    //Insertion of array elements
    int arr[10], i, n, pos, val;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the value of the element to be inserted: ");
    scanf("%d", &val);
    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    printf("Array after insertion: ");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}