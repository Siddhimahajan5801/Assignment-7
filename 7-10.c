#include<stdio.h>
#include<math.h>

int main(){
    int n,i,sum,count=0;

    printf("All Armstrong number between 1 to 1000:\n");

    for (i=1;i<=1000;i++){
        n=i;

    while (n!=0){
        n=n/10;
        count++;
    }
      n=i;

      sum= pow(n%10,count)+pow((n%100-n%10)/10,count)+pow ((n%1000-n%100)/100,count);

      if(sum==i){
        printf(" %d ",i);
      }
      count=0;
    }

return 0;
}