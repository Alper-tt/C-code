#include<stdio.h>

int main() {
	int x=5, y=2;
	
	for(;y>1;y--){
	
	x *=x;
	}
	printf("%d", x);
	
	return 0;
}
