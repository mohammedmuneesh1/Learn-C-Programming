//NOTE 
//in c programming , pointer is It doesn't hold the actual data; instead,
// it holds the address of where the data is stored in memory.
//*ptr;

//CODE
#include<stdio.h>
int main(){
    int n=10;
   int *ptr = &n;
       int value = *ptr; //take value using pointer 
    printf("number is :%d \n",n);
    printf("addres of %d is %p \n",n,ptr); // Used %p format specifier for printing address
    printf("value taken using pointer:%d",value);
}