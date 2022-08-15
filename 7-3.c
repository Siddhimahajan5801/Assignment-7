#include<stdio.h>
#include <math.h>

int main(){
    int n,a1,a2,b1,b2;

    printf("Enter the number n\n");
    scanf("%d",&n);

    //if 5*n*n+4 or 5*n*n-4 is a perfect square then n is in fibonnci series

    a1=(5*n*n)+4;
    a2=(5*n*n)-4;

    b1= sqrt(a1);
    b2= sqrt(a2);

    if ((b1*b1==a1)||(b2*b2==a2))
       printf("%d is in fibonacci series\n",n);
       else 
       printf("%d is not in fiboncci series\n",n);
 
    return 0;
}