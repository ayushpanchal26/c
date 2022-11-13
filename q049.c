#include<stdio.h>
   int countlength(char arr[]);

 int main(){
    char name[100];
    printf("enter your name:-");
    fgets(name,100,stdin);
    printf("lenght is : %d\n", countlength(name));

    char lastname[100];
    printf("enter your last name:-");                                                                
    fgets(lastname,100,stdin);                        
    printf("length is : %d\n", countlength(lastname));                             

   
    return 0;
 }                                                       
                                                                                                         
 int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] !='\0' ; i++){
        count++;

    }
    return count-1;
 }