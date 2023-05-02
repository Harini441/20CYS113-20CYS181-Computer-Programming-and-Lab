#include<stdio.h>
int main(){
	int vol;
	int min;
	double rate;
	printf("Enter the value for VOLUME:");
	scanf("%d",&vol);
	printf("Enter the value for time taken:");
	scanf("%d",&min);
	min=(double)(min/60);
	rate=(double)(vol/min);
	printf("The value of the rate:%f",rate);
}
