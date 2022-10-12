// Program to calculate area of square ,a circle & a rectanle.
#include<stdio.h>
#include<math.h>

 float SquareArea(float side);
 float CircleArea(float rad);
 float RectanleArea(float a, float b);
 
 int main(){
     float side = 12; //we can change these int according to the question
     float a = 5.0;    //we can change these int according to the question
     float b = 10.0;    //we can change these int according to the question
     float rad = 12;   //we can change these int according to the question
     
     printf("area of square: %f\n", SquareArea(side));
     printf("area of circle: %f\n",CircleArea(rad));
     printf("area of rectangle: %f\n",RectanleArea(a,b));

 }
 
 float SquareArea(float side){
     return side*side;
 }
  float CircleArea(float rad){
      return 3.14*rad*rad;
  }
    float RectanleArea(float a, float b){
        return a*b;
    }
// above Program is made to solve few math problems easily and the program is also an example of recursion.
