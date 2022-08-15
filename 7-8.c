#include<stdio.h>

int main(){
    int i,j,n,count=0;

    printf("Enter the number\n");
    scanf("%d",&n);

    for (i=n+1;i<=100;i++){
        count=0;

        for (j=2;j<i;j++){
        if (i%j==0){
        count=1;
        break;
        }
    }
         
    if (count==0){
        printf("Next prime number is %d",i);
        break;
        }
    }

    return 0;
}