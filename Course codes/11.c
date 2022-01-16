#include<stdio.h>
int main() {
	
	int n=0;
	int fact=1;
	printf("Faktoriyel istediginiz sayiyi giriniz :");
	scanf("%d", &n);
	
	while (n!=0) {
		
		fact = fact * n;
		n--;
	}
	printf("%d", fact);

return 0;

}
