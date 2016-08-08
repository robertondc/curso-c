#include <stdio.h>

void soma(int* acc, int a, int b){
	*acc += a + b;
}

void potencia(int* resultado, int x, int y){
	int acc = 1;
	for(int i = 0; i < y; i++){
		acc *= x;
	}
	*resultado = acc;
}

int somarray(int numeros[3], int tamanhoarray){
	int soma = 0;
	for(int i = 0; i < tamanhoarray; i++){
		soma += numeros[i];
	}
	return soma;
}

int main(){

	int acc = 10;
	soma(&acc, 5, 2);
	printf("%d\n", acc);


	int resultadopotencia;
	potencia(&resultadopotencia, 2, 3);
	printf("%d\n", resultadopotencia);

	int tamanhoarray = 3;
	int numeros[3];
	numeros[0] = 1;
	numeros[1] = 2;
	numeros[2] = 1;
	printf("%d\n", somarray(numeros, tamanhoarray));
}