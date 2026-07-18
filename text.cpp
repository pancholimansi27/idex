#include<stdio.h>
int main()		
{
	int a,b;
	printf("enter the number1");
	scanf("%d",&a);
	printf("enter the number2");
	scanf("%d",&b);
	
	
	printf("\n==ARITHMETIC OPERATOR==\n");
	printf("addition: %d,%d and %d\n",a,b,a+b);
	
	
	
	printf("==ASIGMENT OPERATOR==\n");
	printf("a==b: %d\n",a=b);
	
	
	printf("==relation operator==\n");
	printf("a<b && a>b : %d\n",a<b && a>b);
	
}
