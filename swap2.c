#include<stdio.h>
int main(){
	int a,b,c;
	printf("Value for a:");
	scanf("%d",&a);
	printf("Value of b:");
	scanf("%d",&b);
	a=c;
	b=a;
	c=a;
	printf("Before swap: %d and %d\n",a,b);
	printf("After swap: %d and %d\n",a,b);
}
