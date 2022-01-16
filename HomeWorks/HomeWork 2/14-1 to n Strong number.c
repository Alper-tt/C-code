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
	
	int n,i,t,s,a,c,b;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(c=1;c<n;c++){
		a=0;
		s=0;
		b=c;
		t=c;
	
		for(;b>0;b/=10){
		
			a = b%10;
		
			s += fact(a);
		
		}
	
		if(t==s){
			printf("%d is strong number.\n", t);
		}
	
	}
	
	
	return 0;
}
