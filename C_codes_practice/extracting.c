#include<stdio.h>
void main(){
    int arr[100];
    int y;
    int n;
    printf("enter the size of array:\n");
    scanf("%d",&y);
    printf("Enter the values in array:");
    for(int i=0;i<y;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of n to be searched in array:");
    scanf("%d",&n);

    if(n>y){
         printf("value of array is less than the value of index to be searched");   
    }
    else{
    for(int i =0;i<y;i++)
    {
        if(i== n-1){
            printf("value found at index %d\n",i);
            printf("value is : %d",arr[i]);
             }        
     }

    }

}