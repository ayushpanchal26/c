// continue statement 
#include<stdio.h>

int main(){
    for (int i = 1; i<=10; i++){
    if (i==3){//skip
        continue;
    }
 printf("%d\n", i);
}return 0;
}

/*
Continue statement is similar to break statement but in break statement we se that when the specific number is given by the user the function or the program stop working while in the continue statment it also skip the number but print the remaining numbers
*/
