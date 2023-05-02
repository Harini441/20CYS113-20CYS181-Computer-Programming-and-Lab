#include<stdio.h>
int main(){
	int t;
	double T;
	printf("Enter the value for 't':");
	scanf("%d",&t);
	T=(double)((4*t*t)/(t+2))-20;
	printf("The temperature is %f:\n",T);
}

