#include<stdio.h>
void main()
{
    int arr[4]={500,600,800,900};
    int *p=arr;
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
}