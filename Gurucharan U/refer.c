// write a function which will multiple three numbers and call it by reference
#include<stdio.h>
void prod(int *a,int *b,int *c)
{
    int product=(*a)*(*b)*(*c);
    printf("%d\n",product);
}
void main()
{
    int a=7;
    int b=17;
    int c=18;
    prod(&a,&b,&c);
}