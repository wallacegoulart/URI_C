#include <stdio.h>
#include<math.h>

float s2 (int n){
	if ( n == 1) return 1;
	else return (float)(n+n-1) / (float)pow(2,n-1)  + s2(n-1);
}

int main (void){
	
	printf("%.2f\n", s2(39) );

	return 0;
}
