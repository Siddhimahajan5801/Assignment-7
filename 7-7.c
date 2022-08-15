#include<stdio.h>

int main(){
    int i,n,count,n1,n2;

    //a prime number is only divisible by 1 and itself:
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);

    printf("All prime numbers between %d and %d :\n",n1,n2);

    for (n=n1;n<=n2;n++){
        count=0;

    for (i=2;i<=n/2;i++){
        if (n%i==0){
        count++;
        break;
        }  
    }

     if ((count==0) && n!=1){
      printf("%d ",n);
    }
    }
    return 0;
}