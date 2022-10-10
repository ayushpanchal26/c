// Program to verify something: for example following code is made to detect Whether the number input by user is an odd number or even if the  nuumber is odd the program will stop working and if the program is even the program will continue in loop.
#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter number:");
        scanf("%d",&n);
        printf("%d\n",n);
        
        if(n%2 !=0){
            break;
        }
        }while(1);
        printf("thank you");
 return 0;
}
