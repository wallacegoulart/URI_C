#include<stdio.h>

int main (void){
	int x ,z , cont = 0 , soma = 0;
	
	scanf("%d",&x);
	scanf("%d",&z);

	while( z <= x){
		scanf("%d",&z);
	}

	while( 1 ){  
		soma+=x;
		if(soma > z ) break;
		else {
			cont++;
			x++; }
	}

	printf("%d\n", cont+1);

	return 0;
}
