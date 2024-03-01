
//CODE-1
//FINDING FIBONACCI LESS THAN A  GIVEN DIGIT 
//EXAMPLE INPUT:75 OUTPUT:---->   13 21 34 55 
#include<stdio.h>
int main(){
	int fib1=0, fib2=1 , fib3=0, belowDigit;
	printf("Enter the limit:");
	scanf("%d",&belowDigit);
	printf("%d ",fib1);
	printf("%d ",fib2);
	while(fib3<belowDigit){
		fib3=fib1+fib2;
		if(fib3<belowDigit){
		printf("%d ",fib3);		
			}
	
		fib1=fib2;
		fib2=fib3;
		}
	}

//CODE-2
//FIBONACCI UPTO LIMIT
//EXAMPLE INPUT:7 OUTPUT----> 0 1 1 2 3 5 8

#include<stdio.h>
int main(){
    int fib1=0, fib2=1, fib3=0, limit, count=0;
    printf("Enter the limit:");
    scanf("%d",&limit);
    printf("fibonacci upto %d is: ",limit);
    
    printf("%d ",fib1);
    printf("%d ",fib2);
    count+=2;
    while(limit>count){
        fib3 = fib1 + fib2;
        printf("%d ",fib3);
        fib1=fib2;
        fib2=fib3;
        count++;
    }
    return 0;
}	
