// write c program with a function with a variadic arguments?
#include<stdio.h>
#include<stdarg.h>
void add(int count,...)
{
    int result=0;
    va_list bag;
    va_start(bag,count);
    for (int i=0;i<=count;i++)
    {
        int n=va_arg(bag,int);
        result=result+n;
    }
    va_end(bag);
    printf("%d\n",result);
}
void main()
{
    add(3,2,3,4);

}