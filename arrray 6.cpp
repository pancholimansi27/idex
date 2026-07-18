#include<stdio.h>
int main()
{
	int a[100],n,i,positive=0,negative=0,zero=0;
	printf("enter the array size");
	scanf("%d",&n);
	printf("enter element",n);
	for(i=0;i<n;i++)
	{
		printf("element %d",i+1);
		scanf("%d",&a[i]);
	if(a[i]>0) positive++;
	
	else if(a[i]==0)zero++;
	
	else negative++;
}
	
	printf("positive number count is %d",positive);
	printf("\n negative number count is %d",negative);
	printf("\n zero number count is %d",zero);
	return 0;
}
