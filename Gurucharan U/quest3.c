//write a c function which will accept three parameters l,b,h and writtens volume the value cube
#include<stdio.h>
int volume(int l,int b,int h)
{
    int v=l*b*h;
    return v;
}
void main()
{
    int l=7;
    int b=17;
    int h=18;
    printf("v is %d",volume(l,b,h));
}
