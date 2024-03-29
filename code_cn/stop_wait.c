#include<stdio.h>
#include<unistd.h>
int main()
{
  //input declarations start  
int n;
printf("Enter the Number of Frames:\n");
scanf("%d",&n);
int inputarr[n];
int waitack[n];
int inp;
int waitinp;
int count=0;
int x;
//input declaration ends
//giving input values start
printf("Enter the data:\n");
for(int i=0;i<n;i++){
scanf("%d",&inp);
inputarr[i]=inp;
}
printf("Enter the waiting acknowledgement time:\n");
for(int i=0;i<n;i++){
scanf("%d",&waitinp);
waitack[i]=waitinp;
}
// end of giving input values
//printing output
for(int i=0;i<n;i++){
    if(waitack[i]<=2){
        printf("\nFrame:");
        printf("%d",i);
        printf("\nData:");
        printf("%d",inputarr[i]);
        printf("\nWait Time for Acknowledgement:");
        printf("%d",waitack[i]);
        fflush(stdout);
        usleep(100000*waitack[i]);
        printf("\nAcknowledgement: YES\n");
        printf("Resent: No\n");
    }
    else
    {
    printf("\nFrame:");
        printf("%d",i);
        printf("\nData:");
        printf("%d",inputarr[i]);
        printf("\nWait Time for Acknowledgement:");
        printf("%d",waitack[i]);
        fflush(stdout);
        usleep(100000*waitack[i]);
        printf("\nAcknowledgement: No\n");
        printf("Resent: Yes\n");

        printf("\nFrame:");
        printf("%d",i);
        printf("\nData:");
        printf("%d",inputarr[i]);
        waitack[i]=0;
        printf("\nWait Time for Acknowledgement:");
        printf("%d",waitack[i]);
        fflush(stdout);
        usleep(100000*waitack[i]);
        printf("\nAcknowledgement: YES\n");
        printf("Resent: No\n");
        count+=1;
    }
}

if(count>0){
    x=n+count;
}
else{
    x=n;
}
printf("The tota number of acknowledgement are: ");
printf("%d",x);
}