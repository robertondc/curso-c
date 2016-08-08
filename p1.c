#include <stdio.h>

void joga(int x) {
	x++;
	printf("-> %d\n", x);
}

int main(){

	int tentativa = 0;
	printf("%d\n", tentativa);

	tentativa++;
	printf("%d\n", tentativa);

	joga(tentativa);

	printf("%d\n", tentativa);

}