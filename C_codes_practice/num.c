#include<stdio.h>

void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    for(int i=0;i<a+2;i++){
         
        if(i<a+1){
           printf("%d ",i);
         }
        else{
            if(a<500){
                i=-1;
                a+=100;
            }
            else if(a==500){
                break;
            }
        }
    }
}