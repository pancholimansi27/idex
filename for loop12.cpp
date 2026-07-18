#include<stdio.h>
int main()
{
	int i,j,k=0;
	for(i=0;i<=8;i+=2)
	{
		for(j=i;j>=k;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		k++;
	}
}
