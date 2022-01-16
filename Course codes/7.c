#include<stdio.h>
int main() {
	/*
	int a = 40;
	int b = 50;
	int c = 60;
	int d =70;
	
	a>c && c <=d && (a>b || b<a);
	!(a >=d);
	
	result = false 
			 true
	*/
	
	int a,b = 20 , c =30;
	a = b < c ? c:b;
	
	printf("%d", a);
	
	
	return 0;
}
