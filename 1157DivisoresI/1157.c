#include<stdio.h>

int main (void){
	int n , i = 1  ;
	scanf("%d", &n);
	
	while( i <= n /2 ){
		if(n % i == 0 ) printf("%d\n",i);
		i++; 
	}
	
	printf("%d\n",n);

	return 0 ;
}
