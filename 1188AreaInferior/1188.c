#include<stdio.h>
#include<ctype.h>

void lerMatriz(double  m[][12] , int n){
	int i , j ;
	for(i = 0 ; i < n ; i++)
		for( j = 0 ; j < n ; j++)
			scanf("%lf%*c", &m[i][j]);
}


double areaInferior(double m [][12], int n , char s){
	int i , j, i2 = n ; 
	double total = 0 , cont = 0  ;
	
	for(i = 0 ; i < 5 ; i++){
		int linha = n ;
		i2--;
		for( j = 0 ; j < linha ; j ++){
			if( j > i  ){
				total+= m[i2][j];
				cont++;}
			else linha--;
			
			}
	}
	 
	if(toupper(s) == 'S') return total;
	else return total / cont; 

}

int main (void){
	double  m[12][12];
	char s; 
	scanf("%c", &s);

	lerMatriz(m , 12);
	
	printf("%.1lf\n", areaInferior(m , 12 , s) );

	return 0;
}
