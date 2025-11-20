#include<stdio.h>
void fibo(int n)
{
    int i;
    int a=0;
    int b=1;
    int sum=a+b;
    for (i=0;i<n;i++)
    {
        printf("%d\n",a);
        sum=a+b;
        a=b;
        b=sum;
    }
} 
void main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    fibo(n);
} 