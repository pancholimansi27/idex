#include<stdio.h>
int main(){
	int a[100],i,max,min;
	printf("input the no of element to be stored");
	scanf("%d",&n);
	printf("input %d element in the array \n",n);
	for(i=0;i<n;i++){
		printf("element %d",i+1);
		scanf("%d",a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++){
		if(a[i]>max);
	}
	if(a[i]<min){
		min=a[i];
}
}
