#include<stdio.h>
#include<math.h>

int main (void){
	int num , i = 1;
	scanf("%d", &num);
	
	for(i ; i <= num ; i++){
		long int quadrado ,cubo;
		quadrado = pow(i,2);
		cubo = pow(i,3);
		printf("%d ",i); 
		printf("%d ", quadrado);
		printf("%d\n", cubo);} 


	return 0;
}
