#include<stdio.h>

int main (void){
	int n, hora , minuto , ocorrencia , i = 0;
	scanf("%d",&n);
	
	for(i; i < n ; i++){
		scanf("%d %d %d%*c", &hora , &minuto, &ocorrencia);

		if(ocorrencia == 0 ){
			
			if(hora < 10){
				if(minuto < 10) printf("0%d:0%d - A porta fechou!\n", hora , minuto); 
            	else printf("0%d:%d - A porta fechou!\n", hora , minuto); }
			
			else{
				if(minuto < 10) printf("%d:0%d - A porta fechou!\n", hora , minuto); 
            	else printf("%d:%d - A porta fechou!\n", hora , minuto); }
		}
		
		else {
			if(hora < 10){
				if(minuto < 10) printf("0%d:0%d - A porta abriu!\n", hora , minuto); 
            	else printf("0%d:%d - A porta abriu!\n", hora , minuto); }
			
			else{
				if(minuto < 10) printf("%d:0%d - A porta abriu!\n", hora , minuto); 
            	else printf("%d:%d - A porta abriu!\n", hora , minuto); }
		
            }
	}
	return 0;
}
