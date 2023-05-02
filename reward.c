#include<stdio.h>
#define CASH 100
int main(){
	double init;
	double final;
	double total;
	double reward;
	printf("Enter the initial reading:");
	scanf("%lf",&init);
	printf("Enter the final reading:");
	scanf("%lf",&final);
	total=final-init;
	reward=CASH*total;
	printf("The total reward is:%f\n",reward);
}
