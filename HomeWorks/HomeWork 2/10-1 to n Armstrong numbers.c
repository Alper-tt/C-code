#include<stdio.h>
#include<math.h>
int main(){
	
	int a,s,n,sum=0,t,c,t1,l;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(a=1;a<n;a++){
		sum=0;
		
		s=a;
		t=s;
		t1=s;
		c=0;
		
		for(;s>0;s/=10){
			c++;
		}
	
	
		for(;t>0;t/=10){
			l = t%10;
			sum += pow(l,c);
		}
	
		if(t1==sum){
			printf("%d is armstrong number.\n",t1);
			
		}
		
	}
	
	return 0;
}
