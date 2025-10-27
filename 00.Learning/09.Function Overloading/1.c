//function overloading not possible in C.
#include<stdio.h>
void sum(int a)
{
printf("sum of int function is called\n");
printf("a=%d\n",a);
}
void sum(double d)
{
printf("sum of double function is called\n");
printf("d=%lf\n",d);
}
int main()
{
int x=10;
sum(x);


}
