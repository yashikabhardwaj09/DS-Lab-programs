#include <stdio.h>
int main(){
    //Program to perform binary search in array
    int arr[100],n,i,l,r,mid,key,flag=0;
    printf("Enter the number of elements int the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array in sorted order: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
}

printf("Enter the element to be searched: ");
scanf("%d",&key);
l=0;
r=n-1;
while l<=r{
    mid=l+(r-l)/2;
    if(arr[mid]==key){
        flag=1;
        break;
    }
    else if(arr[mid]<key){
        l=mid+1;
    }
    else{
        r=mid-1;
    }
    





}
