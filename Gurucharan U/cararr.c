// create a structure with three variables name of the car,maximum speed,price store these in a array of structures and display them
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[100];
    int max_speed;
    float price;
};
void main()
{
    int n;
    printf("enter number of car:");
    scanf("%d",&n);
    struct car c[n];
    for(int i=0;i<n;i++)
    {
        printf("enter name of car:");
        scanf("%s",c[i].name);
        printf("enter max_speed of car:");
        scanf("%d",&c[i].max_speed);
        printf("enter price of car:");
        scanf("%f",&c[i].price);
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",c[i].name);
        printf("%d\n",c[i].max_speed);
        printf("%f\n",c[i].price);
    }
}