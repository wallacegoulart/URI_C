#include<stdio.h>
#include<math.h>

int somaimpar(int num1, int num2){
	int i = 1 , soma = 0 , dif , num ;
	
	dif = abs(num1-num2); 
	if(num1 > num2 ) num = num2;
	else num = num1;
	
	for(i  ; i < dif ; i++){
		num++;
		if(num % 2!=0)soma+=num;}

 	return soma;
}


int main (void){
	int n, num1 , num2, i = 0 ;
	scanf("%d",&n);
	
	for(i ; i< n ; i++){
		scanf("%d%*c", &num1);
		scanf("%d%*c", &num2);
		printf("%d\n", somaimpar(num1,num2)); }


	return 0;
}
