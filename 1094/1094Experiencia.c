#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main (void){
	int n , i = 0 , qtd , rato = 0 , coelho = 0, sapo = 0  , soma = 0 ;
	char animal;
	scanf("%d", &n);

	for(i ; i < n ; i++){
		scanf("%d %c%*c", &qtd , &animal);
		soma+= qtd;

		if(toupper(animal) == 'R') rato += qtd;
		else if(toupper(animal) == 'S') sapo += qtd;
		else if(toupper(animal) == 'C') coelho += qtd;
		}


	printf("Total: %d cobaias\n",soma);
	printf("Total de coelhos: %d\n",coelho);
	printf("Total de ratos: %d\n",rato);
	printf("Total de sapos: %d\n",sapo);
	


	printf("Percentual de coelhos: %.2f %%\n", (float)coelho/ (float)soma *100.0 );
	printf("Percentual de ratos: %.2f %%\n", (float)rato/ (float)soma *100.0 );
	printf("Percentual de sapos: %.2f %%\n", (float)sapo /(float)soma *100.0);

	return 0;
}
