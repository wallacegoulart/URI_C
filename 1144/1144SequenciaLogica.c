#include <stdio.h>
#include <math.h>

int main (void){
	int num , i = 0 , l1 = 1 , l1b = 1 , l2 =1 , l3 =1  ;
	scanf("%d", &num);

	for( i ; i < num ; i++){
		long int linha2 = pow(l2,2);
		long int linha3 = pow(l3,3);
		printf("%d ",l1);   printf("%d ",linha2); printf("%d",linha3);
		printf("\n");
		printf("%d ",l1b);  printf("%d ",linha2+1); printf("%d",linha3+1);
		printf("\n");
		l1++; 
		l2++;
		l1b++;
		l3++;}


	return 0;
}
