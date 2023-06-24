#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the 1st number:");
	scanf("%d",&a);
	printf("Enter the 2nd number:");
	scanf("%d",&b);
	printf("Before swap: %d and %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swap: %d and %d\n",a,b);
}
