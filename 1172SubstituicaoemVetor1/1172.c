#include<stdio.h>

void troca( int v[] , int n){
	int i ;

	for(i = 0 ; i < n ; i++){
		if(v[i] <= 0) v[i] = 1;
	} 

}


void exibi(int v[] , int n){
	int i ;

	for(i = 0; i < n ; i++){
		printf("X[%d] = %d\n", i , v[i]); 
	}

}


int main (void){
	int v[10], i;
	
	for(i=0 ; i < 10; i++)
		scanf("%d%*c", &v[i]); 
	
	troca(v,10);
	exibi(v,10);

	return 0;
}
