#include <stdio.h>

int main (void){
	int a , n , i , soma = 0 ;

	while( 1 ){
		scanf("%d %d", &a,&n);
		
		if(n <=0){
			while( n <= 0){ 
				scanf("%d",&n);} }

		for(i = 0 ; i < n ; i++){
			soma+= i + a ;}
		
		break;		
	}

	printf("%d\n", soma);

	return 0;
}
