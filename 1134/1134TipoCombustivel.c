#include <stdio.h>

int main (void){
	int num , gasolina = 0 , alcool = 0 , diesel = 0; 
	scanf("%d",&num);

	while(num !=4){
		scanf("%d%*c", &num);
		if(num == 1 )alcool++;
		else if (num == 2) gasolina++;
		else if (num == 3)diesel++; }

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);

	return 0 ;
}
