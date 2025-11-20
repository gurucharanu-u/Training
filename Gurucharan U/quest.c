// write a function which will accept two input parameters x,y and writtens x^2+y^2
#include<stdio.h>
#include<math.h>
int sum_s (int x, int y)   
{
  int s=x*x+y*y;
  return s;
}
void main()
{
    int x=18;
    int y=17;
    printf("square of x and y is %d",sum_s(x,y));
}
