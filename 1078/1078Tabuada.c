#include<stdio.h>

int main(void){
	int num1 , i = 1;
	scanf("%d", &num1);

	for (i ; i <=10 ; i++)
		printf("%d x %d = %d\n", i, num1 , i*num1);

	return 0;
}
