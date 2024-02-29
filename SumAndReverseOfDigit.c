#include<stdio.h>
int main(){
    int number, sum=0, rev=0;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("Entered Number is : %d \n",number);
    while(number>0){
        sum=sum+number%10;
        rev=(rev*10)+number%10;
        number=number/10;
    }
    printf("Reverse of digit:%d \n",rev);
    printf(" Sum of digit:%d",sum);
}