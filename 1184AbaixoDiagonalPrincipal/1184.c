#include<stdio.h>
#include<ctype.h>

void lerMatriz(float m[][12], int n ){
	int i , j ;
	for( i = 0 ; i < n ; i++)
		for( j = 0 ; j < n ; j ++)
			scanf("%f%*c", &m[i][j]);  
}

float diagonalAbaixo( float m [][12], int n , char s){
	int i , j ; 
	float total = 0 , cont = 0 ;

	for(i = 0; i < n ; i++)
		for(j = 0; j < n ; j++)
			if( j < i){ total+= m[i][j];
						cont++;}  

	if(toupper(s) == 'S') return total;
	else return total / cont ;

}

int main (void){
	float m[12][12];
	char s ; 
	scanf("%c", &s );

	lerMatriz(m,12);
	printf("%.1f\n",diagonalAbaixo(m,12,s) );

	return 0 ;
}
