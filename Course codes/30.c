#include<stdio.h>

void degerdegistir(int *a, int *b) {
    
	int temp =*a;
	*a=*b;
	*b=temp;
	
	
	
	
	
	
	
}

int main(){
	int x=5, y=10;
	
	degerdegistir(&x,&y);
	
	printf("x:%d y:%d",x,y);
	
	return 0;
}

