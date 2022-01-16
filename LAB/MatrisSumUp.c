#include <stdio.h>

int arr1[3][3], arr2[3][3],arr3[3][3],i,j,result=0;

int main(){
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &arr1[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &arr2[i][j]);
		}
	}
	
	for(i=1;i<4;i++){
		for(j=1;j<4;j++){
			result = arr1[i][j] + arr2[i][j];
			arr3[i][j] = result;
			printf("\n%d. satir %d. sutundaki sayilarin toplami toplami: %d\n",i,j,result);
		}
	}
	
	
	return 0;
}
