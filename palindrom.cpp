#include<stdio.h>
int main()
{
	int a=1,b;
	while(a<1000)
	{
		int s=0,c=a;
		while(c>0){
		
			b=c%10;
			s=(s*10)+b;
			c=c/10;
		}
	if(s==a)
	{
		printf("%d is palindrom number\n",a);
	}
	a++;
		
	}
}
