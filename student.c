#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int rollno;
	char mname[20];
	char fname[20];
	double sem1_sgpa,sem2_sgpa;
	double cgpa;
	double total;
	double avg;
}s[80];

int main(){
	int n,i;
	printf("Enter the no. of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the name:\n");
        	scanf("%s",&s[i].name);
        	printf("Rollno:\n");
        	scanf("%d",&s[i].rollno);
		printf("Mother's name:\n");
		scanf("%s",&s[i].mname);
		printf("Father's name:\n");
		scanf("%s",&s[i].fname);
		printf("
}
