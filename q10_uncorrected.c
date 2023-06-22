#include<stdio.h>
#include<string.h>

struct complexno{
	int real;
	int complexnum;
}num1,num2;

int main(){
	int result1,result2;
	printf("Enter the value for real no:");
	scanf("%d",&num1.real);
	printf("Enter the value for complex no:");
	scanf("%d",&num1,complexnum);
	printf("Value for realno:");
	scanf("%d",&num2.real);
	printf("Value for complex no:");
	scanf("%d",&num2.complexnum);
	
	result1=num1.real*num2.real;
	result2=num1.complexnum*num2.complexnum;

	printf("The multiplication of the two complex numbers are: %d + %d",result1,result2);
}

