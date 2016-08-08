#include <stdio.h>
#include <string.h>

char palavrasecreta[20];
char chutes[26];
int tentativas = 0;

void abertura(){
	printf("/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}

// em c quando uma variavel e declarada no parametro de uma funcao, ela existe apenas no escopo da funcao.
// se nao usar ponteiros os parametros serao copiados no momento chamada e estes valores nao serao alterados.
// &tentativas -> devolve o endereco da variavel tentativas
// int* tentativas -> a variavel 'tentativas' aramazena um endereco
// (*tentativas) -> essa experessao devolve o conteudo do endereco armazenado na variavel tentativas
// array nao precisa, pois em c todo array eh um ponteiro. o valor da variavel de array e o endereco do primeiro item
void chuta(){
	
	char chute;
	scanf(" %c", &chute);

	chutes[tentativas] = chute;
	tentativas++; //se nao tiver o (*) vai incrementar o endereco de memoria
}


int jaachou(char letra){
	int achou = 0;
	for (int j = 0; j < tentativas; j++){
		if(chutes[j] == letra){
			achou = 1;
			break;
		}
	}
	return achou;
}

void desenhaforca(){
	for(int i =0; i< strlen(palavrasecreta); i++){

		int achou = jaachou(palavrasecreta[i]);

		if (achou){
			printf("%c ", palavrasecreta[i]);
		} else {
			printf("_ ");
		}

	}
	printf("\n");
}

void escolhepalavra(){
	sprintf(palavrasecreta, "MELANCIA");
}

int main(){

	abertura();

	escolhepalavra();

	int acertou = 0;
	int enforcou = 0;

	do {
		desenhaforca();
		chuta();

	} while(!acertou && !enforcou);

}