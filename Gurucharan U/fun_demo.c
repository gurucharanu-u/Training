#include<stdio.h>
int myadd(int a,int b)
{
    int sum=a+b;
    return sum;
}
void main()
{
    int a=18;
    int b=17;
    printf("%d\n",myadd(a,b));
    int c=333;
    int d=7;
    printf("%d\n",myadd(c,d));
}
