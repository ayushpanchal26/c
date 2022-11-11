#include<stdio.h>

int main(){

     char str[100];
     gets(str);
     puts(str);

     return 0; 
}

// here in code we have used "gets" function gets works same as it "fgets" work but "gets" funtion is Dangerous and outdated
// and the programs builded with "gets has chance to get hacked"