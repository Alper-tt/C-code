#include<stdio.h>

int main(){
	
	int i;
	int toplam = 0;
	/*
	for (i=1;i<=10; i++){
		
		if (i%2==1){
			continue;
			
		}
		
		toplam += i;
		
		
		
	}
	
	printf("%d", toplam);
	*/
	
	while (i<=10) {
	
		if (i%2==1){
			i++;
			continue;
		}
	toplam +=i;
	i++;
	}
	
	printf("%d", toplam);
	
	return 0;
}
