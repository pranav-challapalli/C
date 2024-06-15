#include<stdio.h>
void MaxOf3(int x,int y,int z){
if(x>y && x>z){
    printf("%d",x);
}
else if(y>x && y>z){
printf("%d",y);
}
else{
    printf("%d",z);
}
}

void max_of_3(int x, int y, int z){
    if(x-y && x-z>0){
        printf("%d",x);
    }
    else if(y-x && y-z>0){
        printf("%d",y);
    }
    else{
        printf("%d",z);
    }
}
void main(){
    int a=0,b=0,c=0;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    //if you want to enter with commas in user input we can un comment below and comment above
    //scanf("%d,%d,%d",&a,&b,&c);
    max_of_3(a,b,c);
    printf("\n");
    MaxOf3(a,b,c);
}