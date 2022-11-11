#include<stdio.h>
int main()
{

    char str[100];
    fgets(str , 100 , stdin);
    puts(str);

    return 0;
}

// here we have used "fgets" function it work for taking the input , it is the updated type of "gets"