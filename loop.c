#include<stdio.h>
int main(){
	int n,i,check=1;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2; i<=n/2;i++){
		if(n%i==0){
		  check=1;
		  break;
		 }
	}
	if(n==1){
		printf("1 is neither prime nor composite\n");
	}
	else{
		if(check==0){
			printf("The given number is prime number\n");
		}
		else{
		printf("%d is not a prime number\n",n);
		}
	}
	return 0;
}


