#include<stdio.h>
enum days
{
    monday,tuesday,wednesday,thursday,friday,saturday,sunday
};
void main()
{
    enum days day;
    day=thursday;
    printf("%d\n",day);
}