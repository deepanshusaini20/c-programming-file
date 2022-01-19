#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    //initiating for loop to multiply the number by its decrement till 1
    for(i=1;i<=n;i++){
        fact=fact*i;
        }
        printf("factorial=%d",fact);
    return 0;
} 

//alogorithm
//1.START
//2.Take the integer variable a.
//3.Assign value to the variable. 
//4.From value A up to 1 multiply each digit and store.
//5.The final stored value is factorial of a.
//6.STOP.

