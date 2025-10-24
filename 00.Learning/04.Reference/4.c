//reference variable not possible in C.
#include<stdio.h>
int main()
{
	int x=10;
	int &r=x;

	printf("x=%d\n",x);
        printf("r=%d\n",r);


}
