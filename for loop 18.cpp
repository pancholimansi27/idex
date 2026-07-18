#include<stdio.h>
int main()
{
	int i,j,k=5;
	for(i=9;i>=0;i-=3)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d",i);
		}
		printf("\n");
		k--;
	}
}
