#include<stdio.h>

int main(){

    int n1,n2,hcf=1;

    printf("Enter two numbers whose hCf is to be calculated\n");
    scanf("%d %d",&n1,&n2);

    for (int i=1; i<=n1||i<=n2; i++){
        if((n1%i==0) && (n2%i==0))
        hcf=i;

    }
      printf("The HCF is %d",hcf);

    return 0;
}