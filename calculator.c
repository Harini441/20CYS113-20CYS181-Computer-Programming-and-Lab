#include<stdio.h>
int main(){
	int a;
	int b;
	int sum;
	int diff;
	int multi;
	int division;
	printf("Value for A:");
	scanf("%d",&a);
	printf("Value for B:");
	scanf("%d",&b);
	sum=a+b;
	diff=a-b;
	multi=a*b;
	division=a/b;
	printf("The sum is: %d \n",sum);
	printf("The difference is: %d \n",diff);
	printf("The Multiplicaton is: %d \n",multi);
	printf("Division is: %d \n",division);
}


