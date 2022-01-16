#include<stdio.h>

int main(){
	int x,y,sum=0;
	
	for(x=1000;x<=2000;x++){
		
		if(x%2==0){
			printf("%d\n",x);
			sum += x;
		}
	}
	printf("SUM : %d",sum);


	return 0;
}
