#include<stdio.h>

int i,j,k,spc,n=1,result;
for(i=1;i<=n;i++){
	for(k=spc;k>=1;k--){
		printf(" ");
	}
	for(j=1;j<=i;j++){
		printf("%d",j);
	}
}
for(i=1;i<=n;i++){
	printf("%d",i);
	for(j=1;j<=i;j++){
		result=i+j;
		printf("%d",result);
	}
}
}
