#include<stdio.h>
int check(int x, int y)
{
	return x==30 || y==30 || (x+y==30);
}
int main(){
	int a,b;
	printf("enter a and b:");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d",check(a,b));
}

