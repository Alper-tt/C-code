#include<stdio.h>
#include<math.h>
int main(){
	
	int n,sum=0,t,c,t1,l;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	t=n;
	t1=n;
	
	for(;n>0;n/=10){
		c++;
	}
	
	
	for(;t>0;t/=10){
		l = t%10;
		sum += pow(l,c);
	}
	
	if(t1==sum){
		printf("%d is armstrong number.",t1);
	}
	else{
		printf("%d is not armstrong number",t1);
	}
	
	return 0;
}
