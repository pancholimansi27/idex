#include<stdio.h>
int main(){
	int a[5],i,sum=0;
	float avg;
	printf("enter %d integer numbers\n,5");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of number: %d\n",sum);
	avg=sum/5;
	printf("avg of number: %d\n",avg);
		return 0;
}
