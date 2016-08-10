#include <stdio.h>
#include <stdlib.h>

int main(){

	int linhas = 5;
	int colunas = 10;
	int** numeros;

	numeros = malloc(sizeof(int*) * linhas);
	for(int i = 0; i < linhas; i++){
		numeros[i] =  malloc(sizeof(int) * colunas + 1);
	}

	for(int i = 0; i < linhas; i++){
		for (int j = 0; j < colunas; j++){
			numeros[i][j] = j+1;
		}
	}

	for(int i = 0; i < linhas; i++){
		for (int j = 0; j < colunas; j++){
			printf("%d", numeros[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < linhas; i++){
		free(numeros[i]);
	}

	free(numeros);

}