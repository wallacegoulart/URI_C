#include<stdio.h>
/*
int main (void){
	int n , c , m ;
	scanf("%d %d %d", &n ,&c, &m);

	int carimbadas[c] , compradas[m] , total = c,  i , j ;

	for(i = 0 ; i < c ; i++)
		scanf("%d",&carimbadas[i] );

	for(j = 0 ; j < m ; j++)
		scanf("%d",&compradas[j] );

	 

	for(i = 0 ; i < c ; i++)
		for(j = 0 ; j < m ; j++){
			if( carimbadas[i] == compradas[j])
				total--; 
				break; }

	printf("%d\n",total);

	return 0 ;
}
*/

int main (void){
int n , c , m ;
scanf("%d %d %d", &n ,&c, &m);



int carimbadas[c] ,
compradas[m],
total = c ;



int i, j;



for(i=0 ; i < c ; i++)
scanf("%d",&carimbadas[i] );



for(j = 0; j < m ; j++)
scanf("%d",&compradas[j] );



for(j = 0 ; j<m ; j++)
for(i = 0 ; i < m ; i++){
if( carimbadas[i] == compradas[j])
total--; break; }



printf("%d\n",total);
return 0 ;
}


