// write a c program which add three numbers and called by reference
#include<stdio.h>
void add(int *a,int *b,int *c)
{
    int sum=(*a)+(*b)+(*c);
    printf("%d\n",sum);
}
void main()
{
    int a=7;
    int b=17;
    int c=18;
    add(&a,&b,&c);
}