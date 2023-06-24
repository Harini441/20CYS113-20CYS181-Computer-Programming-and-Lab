#include<stdio.h>
int main(){
	double tot;
        int noofstu;
	double avg;
	printf("Enter the no. of students:");
        scanf("%d",&noofstu);
	printf("Enter the Total marks:");
	scanf("%lf",&tot);
	avg=(double)tot/noofstu;
	printf("The average of %d students is:%lf \n",noofstu,avg);
}  



