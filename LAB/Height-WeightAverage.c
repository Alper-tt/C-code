#include<stdio.h>

int main(){
	
	int ave1,ave2,i,j,arr1[10][2],sum1=0,sum2=0;
	
	
	printf("Kilo degerleri: \n");
	for(i=0;i<10;i++){
		scanf("%d", &arr1[i][0]);
		sum1+=arr1[i][0];
		}
	printf("Boy degerleri: \n");
	
	for(j=0;j<10;j++){
		scanf("%d", &arr1[i][1]);
		sum2+=arr1[i][1];
	}
	
	ave1 = sum1/10;
	ave2 = sum2/10;
	
	printf("Kilo ortalamasi: %d\n", ave1);
	printf("Boy ortalamasi: %d", ave2);
	
	
	return 0;
}
