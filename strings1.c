#include<stdio.h>
void printString(char arr[]);

int main(){
     char firstname[] = "AYUSH";
     char lastname[] = "PANCHAL";

    printString(firstname);
    printString(lastname);

    

}

void printString( char arr[]){
    for(int i = 0; arr[i] !='\0';i++ ){
        printf("%c", arr[i]);
    }
    printf("\n");
}