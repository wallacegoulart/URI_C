#include <stdio.h>

int main (void){
	int n ,cont = 0;
	float soma = 0 ;

	do {
		scanf("%d%*c", &n);
		if ( n > 0 ){ 
			cont++;
			soma+=n;}
	
	} while (n > 0); 

	printf("%.2f\n" ,( soma/cont));

	return 0;

}
