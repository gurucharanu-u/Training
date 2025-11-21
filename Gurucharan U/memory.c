#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p=(int*)malloc(4*sizeof(int));
    p[0]=7;
    p[1]=17;
    p[2]=18;
    p[3]=333;
    printf("%d\n",p[0]);
    free(p);
}