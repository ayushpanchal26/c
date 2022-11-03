#include<stdio.h>
void _swap(int*a ,int*b);

int main(){

    int x = 99 ,y= 23;
    _swap(&x,&y);
    printf("x=%d & y=%d\n", x,y);

}
// call by refernce
void _swap(int*a ,int*b){
     int t = *a;
    *a = *b;
    *b = t;
}