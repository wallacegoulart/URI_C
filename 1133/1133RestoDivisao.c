#include<stdio.h>
#include<math.h>

int main (void){
	int num1 , num2 , dif , i =0 , num;
	scanf("%d%*c",&num1);
	scanf("%d%*c",&num2);
	dif = abs( (num1-num2) );
	
	if( num1 < num2 ) num = num1;
	else num = num2;

	for(i; i < dif ; i++){
		num++;
		if( abs(num) % 5 == 2 || abs(num) % 5 == 3) 
			printf("%d\n",num);}  



	return 0;

}
