// Program to check if a student passed or failed 
// marks>30 = pass 
// marks<=30 = fail.
#include<stdio.h>

int main(){
    int marks;
    printf("Enter number(0-100):");
    scanf("%d", &marks);
    
    if (marks>30){
        printf("pass");
    }
    else if(marks<=30){
        printf("fail");
    }

return 0;    
}
