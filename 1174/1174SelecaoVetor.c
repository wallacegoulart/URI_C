#include<stdio.h>

void preenchendo(float a[] , int n){
	int i; 
	for(i = 0; i< n ; i++)
		scanf("%f%*c",&a[i]);
}

void exibi (float a[] , int n){
	int i ; 
	for(i = 0 ; i < n ; i++){
		if(a[i] <= 10.00)			
			printf("A[%d] = %.1f\n", i , a[i]); 
	}
}

int main (void){
	float a[100];
	preenchendo(a,100);
	exibi(a,100);

	return 0 ;
}
