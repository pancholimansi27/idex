#include<stdio.h>
int main()
{
	int a[100],i,max,min,n;
	printf("input the no of element to be stored");
	scanf("%d",&n);
	printf("input element in the array:\n",n);
	for(i=0;i<n;i++){
		printf("element %d",i+1);
		scanf("%d",&a[i]);
	}	
	max= a[0];
	min= a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("Maximum element is:%d\n",max);
	printf("minimum element is:%d\n",min);
	return 0;
}
