#include<stdio.h>

int main(){
	
	int n,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(;n>0;n/=10){
		
		if(n%10==1){
			c1 += 1;
		}
		else if(n%10==2){
			c2 += 1;
		}
		else if(n%10==3){
			c3 += 1;
		}
		else if(n%10==4){
			c4 += 1;
		}
		else if(n%10==5){
			c5 += 1;
		}
		else if(n%10==6){
			c6 += 1;
		}
		else if(n%10==7){
			c7 += 1;
		}
		else if(n%10==8){
			c8 += 1;
		}
		else if(n%10==9){
			c9 += 1;
		}
	}
	printf(" Numbers of 1: %d\n Numbers of 2: %d\n Numbers of 3: %d\n Numbers of 4: %d\n",c1,c2,c3,c4);
	printf(" Numbers of 5: %d\n Numbers of 6: %d\n Numbers of 7: %d\n Numbers of 8: %d\n Numbers of 9: %d\n",c5,c6,c7,c8,c9);
	
	return 0;
}
