#include <stdio.h>


void pares(int n){	
	if(n == 2){ 
		printf("%d\n",n);
		return;}	
	else {
		pares(n-1);
		if(n %2 == 0)printf("%d\n",n);}
}

int main(void){
	pares(100);
	return 0;
}


/*
int main (void){	
	int i = 1;
	for(i ; i<=100 ; i++){
		if(i % 2 == 0 )printf("%d\n",i);}

	return 0;
}
/*
