#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    float sum=0, val=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        val=1/pow(i,i);
        sum+=val;
    }
    printf("The sum of the series 1+-----------1/%d^%d is : %f ",n,n,sum);
    return 0;
}