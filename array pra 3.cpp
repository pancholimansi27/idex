#include<stdio.h>
int main()
{
	int l,i,max;
	printf("enter hte length");
	scanf("%d",&l);
	int a[l];
	for(i=0;i<l;i++)
	{
		printf("enter value of a: ");
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<l;i++)
	{
		printf("%d",a[i]);
			if(max<=a[i])
			{
				max=a[i];
			}
	}
	printf("%d",max);
	}
#include<stdio.h>
int main()
{
	int l,i,max;
	printf("enter hte length");
	scanf("%d",&l);
	int a[l];
	for(i=0;i<l;i++)
	{
		printf("enter value of a: ");
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<l;i++)
	{
		printf("%d",a[i]);
			if(min<=a[i])
			{
				max=a[i];
			}
	}
	printf("%d",max);
	}
