#include <stdio.h>
#include <string.h>

int main() {
	char palavra[] = "VIAGEM";
	int tamPalavra = strlen(palavra);
	
	printf("A palavra invertida eh: \n");
		
	for (int i = tamPalavra - 1; i >= 0; i--){
		printf("%c ", palavra[i]);
	}
	return 0;
}
