#include<stdio.h>

void preenchendo(int v[] , int n){
	int i ;
	for( i = 0 ; i < n ; i++)
		scanf("%d%*c",&v[i]);
}

void troca ( int v[] , int n ){
	int i , m ; 
	for(i = 0 ; i < n ; i++){
		  m = v[i];
		  v[i] = v[n];
		  v[n] = m ;
		  n--;
	}
}


void exibi (int v[] , int n ){
	int i ; 
	for( i = 0 ; i < n ; i++)
		printf("N[%d] = %d\n", i , v[i]);
}

int main (void){
	int v[20];

	preenchendo(v,20);
	troca(v,19);
	exibi(v,20);

	return 0;
}
