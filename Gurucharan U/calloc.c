#include<stdio.h>
#include<stdlib.h>
void main()
{
    float*p=(float*)calloc(4,sizeof(float));
    p[0]=7.777;
    p[1]=17.1717;
    p[2]=18.1818;
    p[3]=333.3333;
    printf("%f\n",p[0]);
    free(p);
}