/* Pares.c - programa para identificar os pares */

#include <stdio.h>

int quantidadePares(int num[] , int n){
	int i = 0 , cont = 0;
	for(i ; i < n ; i++) 
		if(num[i] % 2 == 0)cont++;
	
	return cont; 
}

int main(void){
	int num[4], i = 0 ;
	for(i ; i < 5 ;i++)
		scanf("%d%*c", &num[i]); 
	printf("%d valores pares\n", quantidadePares( num,5) );   
	
	return 0;
}
