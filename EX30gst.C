// Program to calculate GST on price of the product with 18%of GST.

#include<stdio.h>

void calculatePrice(float value);

int main(){
    float value = 120.0;
    calculatePrice(value);
    return 0;
}
void calculatePrice(float value){
    value = value +(0.18*value);
    printf("Final price:%f", value);
}
