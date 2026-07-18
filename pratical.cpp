#include<stdio.h>
int main()
{
	int a=3,b=9,c=0;
	int sum=0;
	a++;
	while(a<b)
	{
		sum=sum+a;
		c++;
		printf("%d ",a);
		a++;
	}
	printf("\ncount number:%d\n",c);
	printf("sum of number:%d",sum);

	
}
