#include <stdio.h>

int main (void){
	int senha;

	do{
		scanf("%d%*c", &senha);
		if( senha == 2002) printf("Acesso Permitido\n");
		else printf("Senha Invalida\n");
	  } while(senha != 2002);

	return 0;
}
