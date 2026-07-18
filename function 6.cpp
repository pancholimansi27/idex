//with argument no return
#include<stdio.h>
void sqr(int l)
{
	printf("area of square%d ",l*l);
}
int main()
{
	int l;
	printf("enter the length");
	scanf("%d",&l);
	sqr(l);
}
