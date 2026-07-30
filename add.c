#include<stdio.h>
void display(int m,int n,int arr[][]){
    printf("\nElements in array are: ")
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
        printf("%d ",arr[i]arr[j]);
        }
        printf('\n');
    }
}
void add(int m, int n, int arr[][],int a[] []){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            arr[i][j]+=a[i][j];
        }
    }
}
int main(){
    int n,m;
    printf("Enter size of array 1: ");
    scanf("%d %d",&m,&n);
    int arr[m][n],p,q;
    printf("Enter size of array 2: ");
    scanf("%d %d",&p,&q);
    int a[][];
    if (m==p && n==q){
        add(m,n,arr,a);
        printf("Added");
        display(m,n,arr);
    }
    else{
        printf("Arrays should be of same size to add!!");
    }
}