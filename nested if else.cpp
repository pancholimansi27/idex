#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number1 ");
	scanf("%d",&a);
	printf("enter the number2 ");
	scanf("%d",&b);
	if(a>0)
	{
		if(b>0)
		{
			printf("a is positive and b is positive");
		}
		else if(b<0)
		{
			printf(" a is positive and b id negetive");
		}
		else{
			printf("a is positive and b is zero");
		}
	}
	else if(a<0){
		if(b>0)
		{
			printf(" a is negetive and b is positive");
		}
		else if(b<0)
		{
			printf(" a is negetive and b id negetive");
		}
		else{
			printf(" a is negetive and b is zero");
		}
	}
	else
	{
		if(b>0)
		{
			printf(" a is zero and b is positive");
		}
		else if(b<0)
		{
			printf("a is zero and b id negetive");
		}
		else{
			printf("a is zero and b is zero");
		}
		
	}
}
