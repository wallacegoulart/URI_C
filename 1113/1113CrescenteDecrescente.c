#include <stdio.h>

int main(void)
{
    int num1, num2 ,i;

	while( scanf("%d %d", &num1, &num2) != EOF) {
		if(num1 > num2) printf("Decrescente\n");
		else if(num1 < num2) printf("Crescente\n"); }

 
	return 0;
}
