#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
    char name[100];
    char author[100];
    int year;
};
void main()
{
    int n;
    printf("enter number of books:");
    scanf("%d",&n);
    struct book b[n];
    for(int i=0;i<n;i++)
    {
        printf("enter name of book:");
        scanf("%s",b[i].name);
         
        printf("enter author of book:");
        scanf("%s",b[i].author);

        printf("enter year of publication:");
        scanf("%d",&b[i].year);
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",b[i].name);
        printf("%s\n",b[i].author);
        printf("%d\n",b[i].year)
    }
}
