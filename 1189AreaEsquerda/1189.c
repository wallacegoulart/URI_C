#include<stdio.h>
#include<ctype.h>

void preencherMatriz(double m[][12], int n){
	int i , j ;

	for(i = 0 ; i < n ; i ++)
		for( j = 0 ; j < n ; j++)
			scanf("%lf%*c", &m[i][j]);
}

double areaEsquerda( double m[][12] , int n , char t ){
	int i  ;
	double total = 0 , cont = 0, k , p   ;

	for( i = 0 ; i < n ; i ++){
		int j = 0 ;
		if(i <= 5) p = 0 ;
		else p = 11;
		for(k = 0 ; k < p ; k++ ){
			total += m[i][j];
			cont++;
			j++;
			if( i > 5) p--;
			else p++;}  
			
		}

	if(toupper(t) == 'S') return total ;
	else return total / cont ;
					
}



int main (void){
	double m[12][12];
	char t;
	scanf("%c",&t);

	preencherMatriz(m, 12 );
	printf("%1.lf\n" , areaEsquerda(m , 12 , t) );

	return 0 ;
}
