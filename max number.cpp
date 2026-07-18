#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number1 ");
	scanf("%d",&a);
	printf("enter the number2 ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is %d times bigger then %d",a,a-b,b);
		//25 is 10 time bigger then 15
	}
	if(b>a)
	{
		printf("%d is %d times bigger the %d",b,b-a,a);
	}
	if(a==b)
	{
		printf("both are same");
	}

}
