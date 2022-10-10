// Program to print the factorial of the numbers:
#include<stdio.h>

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    
    int fact =1;
    for(int i=1; i<=n;i++){
    fact= fact*i;
}
    printf("final factorial is %d", fact);
    return 0;
}

/*
so in these program we take input from the user and the integer value input by the user is used by the program to make the factorial
*/
