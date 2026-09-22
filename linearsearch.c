#include <stdio.h>
int main()
{
    //Program to perform linear search in an array
    int arr[100], n, i, key,flag= 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be search: ");
    scanf("%d",&key);
    for (i=0;i<n;i++){
        if(arr[i]==key)
        {printf("Element found at index %d",i);
            flag=1;
        break; }
    }
    if (flag==0){
        printf("Element not found");
    }


}