#include<stdio.h>

int main (void){
	int n , num1 , num2 , i , j ;
	scanf("%d", &n);

	for (i = 0  ; i < n ; i++){
		scanf("%d %d%*c", &num1 , &num2);
		int soma = 0;
		for ( j = 0; j < num2 ; ){
			if(num1 % 2 != 0){ 
				soma+= num1;
				j++;}
			num1++;
		} 				 
		printf("%d\n",soma);		
	}

	return 0;
}
