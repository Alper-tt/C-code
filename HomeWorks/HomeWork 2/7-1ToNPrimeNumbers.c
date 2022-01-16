#include<stdio.h>
int main(){
	
	int n,i,c,a;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	
	for(a=2;a<=n;a++){
		c=0;
		for(i=2;i<a;i++){
			if(a%i==0){
				c+=1;
			}
		}
		if(c==0){
			printf("%d\n",a);
		}
	}
	
	
	
	
	
	
	return 0;
}
