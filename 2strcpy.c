#include<stdio.h>
#include<string.h>

int main(){
    char oldstr[] = "oldstr";
    char newstr[] = "newstr";
    strcpy(newstr , oldstr);
    puts(newstr);
}
// here we see that we are changing the value of old string in to new string