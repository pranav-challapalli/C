#include<stdio.h>

void print(int a[100],int s){
    for(int i=0;i<s;i++){
        printf("%d ",a[i]);
    }
}
void main(){
int n=0;
int z=0;
int arr[100];
printf("Enter the size of array : ");
scanf("%d",&n);
printf("Enter the values into array: ");

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("enter the index :");
scanf("%d",&z);
if(z-1>=n){
    printf("error the indexed searched for is greater than size of array.");
}
else{
   for(int i=0;i<n;i++){
    if(i==z-1){
        arr[i]=z;
        printf("Printing changed array:");
        print(arr,n);
        printf("The changed element is %d and the index is %d\n",arr[z-1],z-1);
   }

    }
}

}