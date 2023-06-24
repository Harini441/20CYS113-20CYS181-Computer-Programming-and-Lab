#include <stdio.h>
int main(){
	int n;
	int sum=0;
	int a=1;
	printf("Enter the number:");
	scanf("%d",&n);
	while (a<=n){
		sum=sum+a;
		a++;
	}
	printf("Sum of %d numbers: %d\n",n,sum);
	return 0;
}

