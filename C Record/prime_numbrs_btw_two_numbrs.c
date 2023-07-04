#include <stdio.h>
int isprime(int a)
{int i,count=0;
    for(i=1;i<=a;i++){
        if(a%i==0){
            count+=1;
        }
    }
    if(count==2){
        return 1;
    
    }
    else{
        return 0;
    }
    
}
int generatePrimes(int p,int q){
    int i,r=0;
    for(i=p;i<q;i++){
        r=isprime(i);
        if(r==1){
            printf("%d ",i);
        }
    }
}
int main(){
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("Prime numbers between %d and %d are: ",num1,num2);
    generatePrimes(num1,num2);
}