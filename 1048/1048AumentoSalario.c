#include<stdio.h>


int main (void){
	float sal, novoSal , ajuste;
	int p;
	scanf("%f",&sal);
	
	if ( 0 <= sal && sal <= 400.00){
		novoSal = sal + sal *0.15;
		p = 15;
		ajuste = sal *0.15; }
	
	
	else if ( 400.01 <= sal && sal <= 800.00){
		novoSal = sal + sal *0.12;
		p = 12;
	    ajuste = sal *0.12;} 

	
	else if ( 800.01 <= sal && sal <= 1200.00){
		novoSal = sal + sal *0.10;
		p = 10;
		ajuste = sal *0.10;}


	else if ( 1200.01 <= sal && sal <= 2000.00){
		novoSal = sal + sal *0.07;
		p = 7;
		ajuste = sal *0.07;}

	
	else if ( 2000.00 < sal ){
		novoSal = sal + sal *0.04;
		p = 4;
		ajuste = sal *0.04;}

	printf("Novo salario: %.2f\n",novoSal);
	printf("Reajuste ganho: %.2f\n",ajuste);
	printf("Em percentual: %d %%\n" , p);

	return 0;
}
