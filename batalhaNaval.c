#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Vetor de coluna
    char coluna [10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //Matriz do tabuleiro
    int tabuleiro [10][10];

    //Organização de aparência
    printf("   ");

    //Loop do vetor
    for (int c = 0; c < 10; c++)
    {
        printf("%c ", coluna[c]);
    }

    //Organização de aparência
    printf("\n");
    
    //Loop do tabuleiro
    for (int i = 0, k = 1; i < 10, k <= 10; i++, k++)
    {
        //Números indicaros de linha
        if (k == 10)
        {
            printf("%d ", k);
        } else {
            printf("%d  ", k);
        }
        for (int j = 0; j < 10; j++)
        {
            //Coordenadas dos barcos
            if (i == 2 && j == 3 || i == 2 && j == 4 || i == 2 && j == 5)
            {
                printf("3 ");
            } else if (i == 5 && j == 8 || i == 6 && j == 8 || i == 7 && j == 8){
                printf("3 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
