#include <stdio.h>
#include <stdarg.h>
void display(int count, ...)
{
    va_list list;
    va_start(list, count);
    for (int i = 1; i <= count; i++)
    {
        int n = va_arg(list, int);
        printf("%d\n", n);
    }
    va_end(list);
}
void main()
{
    display(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
}