#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 3

int main() {
	printf("******\n");
	printf("Bem vindo\n");
	printf("******\n");

	int chute;
	int acertou = 0;
	int totaldetentativas;
	double pontos = 1000;
	int nivel;

	srand(time(0));
	int numerosecreto = rand() % 100;
	printf("%d\n", numerosecreto);

	printf("Qual o nivel de dificuldade? \n");
	printf("1) Facil, 2) Medio, 3) Dificil \n");
	scanf("%d", &nivel);

	switch(nivel){
		case 1:
			totaldetentativas = 20;
			break;
		case 2:	
			totaldetentativas = 15;
			break;
		default:
			totaldetentativas = 6;
			break;	
	}

	for(int i = 1; i <= totaldetentativas; i++){

		printf("Tentativa %d de %d tentativas\n", i, totaldetentativas);
		printf("Qual e o seu chute? ");
		
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		if (chute < 0){
			printf("voce nao pode chutar numeros negativos\n");
			i--;
			continue;
		}

		acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;

		if (acertou){
			break;
		} else if (maior){
			printf("Seu numero e maior que o numero secreto \n");
		} else {
			printf("Seu numero e menor que o numero secreto \n");
		}

		double pontosperdidos = abs(chute - numerosecreto) / 2.0;
		pontos = pontos - pontosperdidos;

	}

	if (acertou) {
		printf("Parabens!! \n");
		printf("Voce fez %f pontos", pontos);
	} else {
		printf("Voce perdeu!! \n");
	}

	printf("Fim do jogo\n");
	

}