#include<stdio.h>

int main(){
    int n,r,sum=0,temp;

    printf("Enter the number\n");
    scanf("%d",&n);

    temp=n;

    while (n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }

    if (temp==sum)
       printf("It is an Armstrong number\n");

       else
       printf("It is not an Armstrong number\n");

    return 0;
}