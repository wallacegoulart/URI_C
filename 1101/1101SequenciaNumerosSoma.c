#include<stdio.h>
#include<math.h>

int main (void){
	int num1 , num2;
	
	while(1){			
		scanf("%d %d%*c",&num1 ,&num2);
		if( num1<=0 || num2<=0)break;
		

		int i = 0, soma = 0 , dif , num;
		dif = abs(num1-num2);
		if(num1 > num2) num = num2;
		else num = num1;

		for(i ; i <= dif ; i++){
			printf("%d ",num);
			soma+=num;
			num++;}	
		
		printf("Sum=%d\n",soma); }

	return 0;
}
