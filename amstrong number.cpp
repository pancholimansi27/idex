#include<stdio.h>
int main()
{
	int a=100,b;
	while(a<=999)
	{
		int s=0,c=a;
		while(c>0)
		{
			b=c%10;
			s=s+(b*b*b);
			c=c%10;
		}
		if(s==a)
		{
			printf("the of amstrong number");
		}
		a++;
	}
		
}
	
