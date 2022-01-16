#include<stdio.h>

int fact(a){
	
	int i,f=1;
	
	while(a>1){
		
		f *= a;
		a--;
	}
	return f;
}


int main(){
	
	int n,i,t,s,a;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	t=n;
	
	for(;n>0;n/=10){
		
		a = n%10;
		
		s += fact(a);
		
	}
	
	if(t==s){
		printf("%d is strong number.", t);
	}
	return 0;
}
