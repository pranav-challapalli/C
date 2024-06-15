#include<stdio.h>
//using lessthan sign 
void Min2Num(int a,int b){
if(a>b){
    printf("%d",b);
}
else{
    printf("%d",a);
}
}
// using subtraction to minf min of two numbers 
void Min2num_sub(int a, int b){
    if(a-b>0){
        printf("%d",b);
    }
    else{
        printf("%d",a);
    }

}

void main(){
    int x,y;
    printf("Enter the valu of two numbers:\n");
    scanf("%d %d",&x,&y);
Min2Num(x,y);
printf("\n");
Min2num_sub(x,y);

}