#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    








     // Movimento da torre

   printf("Movimento da torre 5 casas pela direita\n");
   
   for (int i = 0; i < 5; i++) {
    printf("Casa %d: Direita\n", i + 1);
}

// Movimentacao do bispo 

printf("Movimento do bispo 5 casas na diagonal para cima e a direita\n");

int i;
i = 0;

while ( i < 5)
{
    printf("Casa %d: Cima, Direita\n", i + 1);
    i++;
}


 // Movimentação da Rainha
 printf("Movimento da Rainha 8 casas para a esquerda\n");
 i = 0;
 do {
     printf("Casa %d: Esquerda\n", i + 1);
     i++;
 } while (i < 8);

 return 0;

}