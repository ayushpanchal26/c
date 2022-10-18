// function to calculate the sum , product and average of 2 numbers. print that averages in the main function.
#include<stdio.h>

void dowork(int a, int b, int*sum , int*prod, int*avg);

int main(){
    int a = 3, b=5;
    int sum, prod ,avg;
    dowork(a, b ,&sum ,&prod, &avg);
    printf("sum is = %d\n prod  is = %d\n avg is = %d\n", sum , prod , avg );
}

void dowork(int a , int b, int*sum , int*prod, int * avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}