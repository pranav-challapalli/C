#include<stdio.h>

//using swapping to sort the elemnts of array into ascending order
void swapping(int arr[100],int n){
int temp;
for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}
void print(int arr[100],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void main(){
    int n;
    int arr[100];
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the value into array:\n ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
swapping(arr,n);
print(arr,n);
    
}