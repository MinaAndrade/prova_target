#include <stdio.h>

long int fibonacci (int n){
	int num;
	
	if (n == 0) {
		return 0;
	}
	else if (n==1 || n==2){
		return 1;
	}
	
	num = fibonacci(n-1) + fibonacci(n-2);
	return num;
}

int main (){
	int n;
	
	printf("Digite a sequencia de Fibonacci que deseja calcular: ");
	scanf("%d", &n);
	
	while (n <= 0) {
		printf("Valor inválido. Digite um numero maior que 0: ");
		scanf("%d", &n);
	}
	for (int i = 0; i < n; i++){
		printf("%ld ", fibonacci(i));
	}	
	return 0;
}
