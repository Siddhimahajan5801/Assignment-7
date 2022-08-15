#include<stdio.h>

int main(){
    int n,n1=0,n2=1,n3=0;

    printf("Enter the number n\n");
    scanf("%d",&n);

    if ((n==0 )|| (n==1))
    printf("The %d th term of fibonacci series is %d\n",n,n);

    else{
    n3=n1+n2; 
    
    for (int i=3;i<=n;++i){
        n1=n2;
        n2=n3;
        n3=n1+n2;
        }

        printf("The %d th term of fibonacci series is %d\n",n,n2);
    }
     
    return 0;
}