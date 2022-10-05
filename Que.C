// Program to check if a student passed or failed 
// marks>30 = pass 
// marks<=30 = fail.
#include<stdio.h>

int main(){
    int marks;
    printf("Enter number(0-100):");
    scanf("%d", &marks);
    
    if(marks>=0 && marks <=30){
        printf("fail");
    }
    else if(marks>30 && marks<=100){
        printf("Pass");
    }
    else{
        printf("You have entered wrong marks");
    }
return 0;    
}
