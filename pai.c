#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[10];
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	puts(nome);
}