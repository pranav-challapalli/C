#include<stdio.h>
void nxt_even_odd(int x, int y){
   if(x%2==0){
        printf("the number is even\n");
        y = x+2;
        printf("the next even number is %d ",y);
    }
    else{
        printf("the number is odd\n");
        y = x+2;
        printf("the next odd number is %d ",y);
    }
}
void next_even_odd(int x, int y){
   if(x%2==0){
        printf("the number is even\n");
        y = x+1;
        printf("the next odd number is %d ",y);
    }
    else{
        printf("the number is odd\n");
        y = x+1;
        printf("the next even number is %d ",y);
    }
}
void main(){
    int a;
    int nxt=0;
    printf("enter the value of a:");
    scanf("%d",&a);
    nxt_even_odd(a,nxt);
    printf("\n");
    //if we want both even and odd we can uncomment the down line 
    // next_even_odd(a,nxt);
 
}