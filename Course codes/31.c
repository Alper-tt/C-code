#include<stdio.h>

int max(int *a, int uzunluk) {
	int max = a[0];
	int i;
	
	
	for (i=1;i<uzunluk;i++){
		
		if(a[i]>max){
			
			max = a[i];
			
		}
		
	}
	return max;
}



int main(){
	
	int sayilar[5]= {1,2,3,4,5};
	
	int a = max(sayilar,5);
	
	printf("Sayilarin dizisinin en buyuk elemani %d dir", a);
	
	
	return 0;
}
