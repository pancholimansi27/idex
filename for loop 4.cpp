#include<stdio.h>
int main()
{
	int i,j;
	for(i=9;i>=0;i-=3)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
