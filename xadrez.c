#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void novato(){

	const int bispo = 5;
	const int torre = 5;
	const int rainha = 8;
	//bispo
	printf("Bispo\n");
	for (int i = 0; i < bispo; i++){
		printf("Cima, Direita\n");
	}

	//torre
	printf("\nTorre\n");
	int i = 0;
	while(i < torre){
		printf("Direita\n");
		i++;
	}
	
	//rainha
	printf("\nRainha\n");
	i = 0;
	do{
		printf("Esquerda\n");
	}while(++i < rainha);
}

void aventureiro(){

	//primeiro loop representa quantas casas ele vai andar
	//segundo loop a movimentação do cavalo
	int x = 0;
	const int mov_cavalos = 1;
	printf("\nCavalo\n");
	for(int i = 0; i < mov_cavalos; i++){
		x = 0;
		while(x < 3){
			if(x == 0)
				printf("Baixo\n");
			else
				printf("Esquerda\n");
			x++;
		}
	}
}

void torre(int mov){
	if (mov <= 0)
		return ;
	printf("Direita\n");
	torre(--mov);
}

void bispo(int mov){
	if (mov <= 0)
		return ;
	printf("Cima, Direita\n");
	bispo(--mov);
}

void rainha(int mov){
	if (mov <= 0)
		return ;
	printf("Esquerda\n");
	rainha(--mov);
}

void cavalo(int mov){
	int x = 0;
	for(int i = 0; i < mov; i++){
		x = 0;
		while(x < 3){
			if(x == 0)
				printf("Baixo\n");
			else
				printf("Esquerda\n");
			x++;
		}
	}
}
void mestre(){

	printf("\nTorre\n");
	torre(5);

	printf("\nRainha\n");
	rainha(8);

	printf("\nBispo\n");
	bispo(5);

	printf("\nCavalo\n");
	cavalo(3);
}
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

	novato();
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    	aventureiro();
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    //
    mestre();
    return 0;
}
