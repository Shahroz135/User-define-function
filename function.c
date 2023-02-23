#include"stdio.h"
#include"conio.h"
void cube(int);
void main()
{
    int a;
    printf("Enter number of which you want to find cube=");
    scanf("%d",&a);
     cube(a);
}
void cube(int b)
{
    int result;
    result=b*b*b;
    printf("cube if %d is %d", b , result);
}