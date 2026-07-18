#include<stdio.h>
int main()
{
	int l,i,sum=0;
	printf("enter the length");
	scanf("%d",&l);
	int a[l];
	for(i=0;i<l;i++)
	{
		printf("enter vaulve ");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(i=0;i<l;i++){
		printf("%d",a[i]);
	}
	
		printf("%d ",sum);
}
