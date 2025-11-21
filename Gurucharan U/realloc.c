#include<stdio.h>
#include<stdlib.h>
void main()
{
    int*p=(int*)malloc(3*sizeof(int));
    p[0]=7;
    p[1]=17;
    p[2]=18;
    // increase size to 5 integers
    p=(int*)realloc(p,5*sizeof(int));
    p[3]=333;
    p[4]=400;
    for(int i=0;i<5;i++)
    printf("%d\n",p[i]);
    free(p);
}