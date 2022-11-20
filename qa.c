#include<stdio.h>
int main()
{
    char string1[255];
    int i ; 
    printf("INPUT A SENTENCE");
    gets(string1);
    printf("the orignal string:\n");
    puts(string1);
    i=0;
    while(string1[i] != '\0'){

         if(string1[i]=='a' || string1[i]=='e'|| string1=='i'|| string1 == 'o'|| string1 == 'u')
         string1[i]=string1[i]-32;
         i++;
    }
    printf("after converting vowels into uppercase the sentence become:\n");
    puts(string1);
}

// code to convert the lowercase vowels into uppercase vowels.