#include<stdio.h>
void maxinarr(int size,int array[100]){
    int a=0;
for(int i=0;i<size;i++){
    for(int j=0; j<size;j++){
    if(array[j+1]>array[j]){
       a = array[j];
        array[j] = array[j+1];
        array[j+1] = a;
    }
}
}
}

void main(){
    int n;
    int arr[100];
    
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("enter the vlaues of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    maxinarr(n,arr);
    printf("%d",arr[0]);
}