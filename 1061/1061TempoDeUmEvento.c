#include<stdio.h>


int main (void){
	int diaInicial , horaInicial , minInicial , segInicial;
	int diaFinal , horaFinal , minFinal , segFinal;
	int diaRes , horaRes , minRes , segRes;

	scanf("Dia %d%*c",&diaInicial);
	scanf("%d : %d : %d%*c", &horaInicial , &minInicial , &segInicial); 
	
	scanf("Dia %d%*c",&diaFinal);
	scanf("%d : %d : %d", &horaFinal , &minFinal , &segFinal);

	
	


	
	printf("%d dia(s)\n",diaInicial);
	printf("%.2d hora(s)\n%.2d minuto(s)\n%.2d segundo(s)\n", horaInicial , minInicial,segInicial );
	
	

	return 0;
}
