#include<stdio.h>
void evenodd(int x){
if(x%2==0){
    printf("even");
}
else{
    printf("odd");
}
}
void main(){
int a;
printf("enter the value of a:");
scanf("%d",&a);
evenodd(a);

}