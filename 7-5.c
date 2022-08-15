#include<stdio.h>

int main(){
    int i,n1,n2,hcf;

    //a prime number is only divisible by 1 and itself:
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);

    for (int i=1; i<=n1||i<=n2; i++){
        if((n1%i==0) && (n2%i==0))
        hcf=i;
    }
    if (hcf==1)
    printf("%d and %d are co-prime numbers\n",n1,n2);

    else 
    printf("%d and %d are not co-prime numbers\n",n1,n2);


    return 0;

}