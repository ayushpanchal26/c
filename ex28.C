// function to print a welcome note according the input by the user:
#include<stdio.h>

void namste();
void bonjour();

int main(){
    printf("Enter f for french & i for indian:=");
    char ch;
    scanf("%c", &ch);
    
    if(ch=='i'){
        namste();
    } else{
        bonjour();
    }
    return 0;
}

void namste(){
    printf("Namste\n");
}

void bonjour(){
    printf("Bonjour\n");
}


// In the above function i have created a function and recursive program so these is block of code which performs particular task, in above function we made functions to show the nationality of two persons from differnt nation.





