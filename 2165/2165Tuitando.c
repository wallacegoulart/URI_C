#include <stdio.h>
#include <string.h>

int main(void){
	char texto[501];
	gets( texto);
	
	if(strlen(texto) <= 140) printf("TWEET\n");
	else printf("MUTE\n");

	return 0;
}
