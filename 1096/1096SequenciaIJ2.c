#include<stdio.h>


int main (void){
	int cont = 0 , i = 1 ;

	for(cont ; cont <= 4 ; cont++){
		int j = 7 , cont2 = 0;
		
		for(cont2 ; cont2 < 3; cont2++){
			printf("I=%d J=%d\n", i , j );
			j-=1;}
		
		i+=2; }	 	

	return 0;
}
