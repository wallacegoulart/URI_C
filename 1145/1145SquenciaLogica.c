#include<stdio.h>

int main (void){
	int x , y , i , j , i2 = 1;
	scanf("%d %d%*c", &x, &y);


	while ( i2 < y ){
		for(i = 1 ; i <= x ; i ++){
			printf("%d",i2);
			if(i != x )
				printf(" ");
			i2++;}
		printf("\n");
		}

	return 0;
}
