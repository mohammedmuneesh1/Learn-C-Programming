//PRIME NUMBER NOTE
//A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
// In other words, it is a whole number that is only divisible by 1 and itself without leaving a remainder. 
//For example, 2, 3, 5, 7, 11, and 13 are prime numbers because they cannot be divided evenly by any other number except 1 and themselves.

//CODE

#include<stdio.h>
int main() {
    int n, i, flag=0;
    printf("Enter the number to check prime or not:");
    scanf("%d", &n); 
    if(n < 2){
        printf("its not prime number");
        return 0;
    }
    for(i=2; i<=n/2; i++){
        if(n%i ==0 ){
            flag=1;
            break;
        }
    }
    if(flag == 1){
        printf("its not prime number");
    }
    else{
        printf("its a prime number");
    }
 return 0;
}



