#include<stdio.h>
int main()
{
	int l,i,j,c,n;
	printf("enter the length");
	scanf("%d",&l);
	int a[l];
	for(i=0;i<l;i++){
		printf("enter the value");
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
		printf("%d",a[i]);
	}
}
