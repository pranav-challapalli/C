#include<stdio.h>

void main(){
    int a;
    printf("Enter the size of loop : \n" );
    scanf("%d", &a);
    for(int i = 0; i < a+2; i++){
        if(i<a+1){
            printf("%d ",i);
        }
        }
        printf("\n");
     for(int i=a;i>-1;i--){
            printf("%d ",i);
        }
}
