#include <stdio.h>
#include <math.h>

int soma(int numeros[3]){
	int acc = 0;
	for(int i = 0; i < 3; i++){
		acc += numeros[i];
	}
	return acc;
}

int main(){
	int numeros[3];
	numeros[0] = 1;
	numeros[1] = 1;
	numeros[2] = 2;
	printf("-> %d \n", soma(numeros));
}