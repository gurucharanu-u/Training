//write a c function which will accept an array,its size as n and writtens the difference between first and last element
#include<stdio.h>
#include<stdlib.h>
int sub_arr(int arr[],int n)
{
    int sub=arr[0]-arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[3]={7,17,18};
    int n=3;
    printf("%d",sub_arr(arr,n));
}
