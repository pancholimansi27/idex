#include<stdio.h>
int main()
{
	int i,j;
	for(i=9;i>=0;i-=3)
	{
		for(j=i;j>=0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
