#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>
#include <conio.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "");
	
	char escolhaDoJogador;
	char valorDoJogador[50];
	int i, numero;
	srand (time(NULL));
	int randomizador = rand() %3;
	char escolhas[][20] = {"Pedra", "Papel", "Tesoura"};
	
	printf("Escolha entre (1)Pedra, (2)Papel ou (3)tesoura!\n" );
		
	do {
		escolhaDoJogador = getch();
		
		if(isdigit(escolhaDoJogador)!=0){
			valorDoJogador[i] = escolhaDoJogador;
			i++;
			printf("%c", escolhaDoJogador);
		}
		
		}while(escolhaDoJogador!=13);
	
	numero = atoi(valorDoJogador);
	
		
	while(numero >= 4 || numero == 0){
		printf("\nVocê digitou um número diferente do proposto! Escolha apenas entre 1, 2 ou 3:\n");
		
		do {
		escolhaDoJogador = getch();
		
		if(isdigit(escolhaDoJogador)!=0){
			valorDoJogador[i] = escolhaDoJogador;
			i++;
			printf("%c", escolhaDoJogador);
		}
		
		}while(escolhaDoJogador!=13);
		
		numero = atoi(valorDoJogador);
	}
	
	

			
	printf("\n Você escolheu: %d \n E eu escolho: %s" , numero, escolhas[randomizador]);
	system("pause");
	return 0;
	
}
