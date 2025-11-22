#include<stdio.h>
void sum_value (int a,int b)
{
    int sum=a+b;
    printf("%d\n",sum);
}
void sum_ref(int *a,int *b)
{
    int sum=*a+*b;
    printf("%d\n",sum);
}
void main()
{
    int a=18;
    int b=333;
    printf("call by value:\n");
    sum_value(a,b); //call by val
    printf("call by reference:\n");
    sum_ref(&a,&b); //call by ref
}