// NOTE:
// This program calculates the sum of a series.
// A limit is provided, and the program computes the sum up to that limit. For example, if the limit is 6,
// the series would be 1 + 1/2^2 + 1/3^3 + 1/4^4 + 1/5^5 + 1/6^6, and the sum would be approximately 1.291285.
// Output Example: The sum of the series 1 + 1/2^2 + ... + 1/6^6 is approximately 1.291285.

//CODE 
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