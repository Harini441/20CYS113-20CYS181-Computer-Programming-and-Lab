#include<stdio.h>
int main(){
	char ch;
	int count;
	FILE *fd;
	scanf("%c",&ch);
	fd=fopen("intro.txt","r");
	if(fd==NULL){
		printf("Error opening the file");
		return 1;
	}
  
	printf("File contents:\n");
	while ((ch=fgetc((fd)))!=EOF){
		printf("%c",ch);
	}

	fclose(fd);
	return 0;
}
