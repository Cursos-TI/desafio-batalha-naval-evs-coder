// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>
#define TAM 10

void inserirHabcone(int tabuleiroM[TAM][TAM], int hab[3][5], int inicioX, int inicioY){
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 5; y++){
            tabuleiroM[inicioX + x][inicioY + y] = hab[x][y];
        }
    }
}

void inserirHaboctaedro(int tabuleiroM[TAM][TAM], int hab[3][5], int inicioX, int inicioY){
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 5; y++){
            tabuleiroM[inicioX + x][inicioY + y] = hab[x][y];
        }
    }
}

void inserirHabcruz(int tabuleiroM[TAM][TAM], int hab[3][5], int inicioX, int inicioY){
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 5; y++){
            tabuleiroM[inicioX + x][inicioY + y] = hab[x][y];
        }
    }
}


void imprimirTabuleiro(int tabuleiroM[TAM][TAM]){
    for(int x = 0; x < TAM; x++){
        for(int y = 0; y < TAM; y++){
                printf("%2d", tabuleiroM[x][y]);
        }
    printf("\n");
    }
}


int main() {

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    printf("\nDESAFIO NÍVEL NOVATO:\n");
    printf("\n");

    int tab[5][5] = {0};
    int nav1 [3] = {3, 3, 3};
    int nav2 [3] = {3, 3, 3};

    printf("\nPosicionamento do Navio Horizontalgcc (3 partes):\n");

    for(int x = 0; x < 3; x++){
        tab[0][1 + x] = nav1 [x];
        printf("Posição: (0,%d)\n", 1 + x);
    }

    printf("\nPosicionamento do Navio Vertical (3 partes):\n");

    for(int x = 0; x < 3; x++){
        tab[2 + x][2] = nav2 [x];
        printf("Posição: (%d,2)\n", 2 + x);
    }

    printf("\n");

    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            printf("%2d", tab[x][y]);
        }
    printf("\n");
    }
      
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    printf("\nDESAFIO NÍVEL AVENTUREIRO:\n");
    printf("\n");

    int tabuleiro[TAM][TAM] = {0};
    
    int nav3 [3] = {3, 3, 3};
    int nav4 [3] = {3, 3, 3};

    for(int x = 0; x < 3; x++){
        tabuleiro[0][3 + x] = nav1 [x];
    }

    for(int x = 0; x < 3; x++){
        tabuleiro[7 + x][4] = nav2 [x];
    }

    for(int x = 0; x < 3; x++){
        tabuleiro[0 + x][9 - x] = nav3[x];
    }

    for(int x = 0; x < 3; x++){
        tabuleiro[9 - x][0 + x] = nav4[x];
    }

    for(int x = 0; x < TAM; x++){
        for(int y = 0; y < TAM; y++){
            printf("%2d", tabuleiro[x][y]);
        }
    printf("\n");
    }

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

    printf("\nDESAFIO NÍVEL MESTRE:\n");
    printf("\n");
    
    int tabuleiroM[TAM][TAM] = {0};

    int habcone [3][5] = {{0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {1, 1, 1, 1, 1}};
    int haboctaedro [3][5] = {{0, 0, 1, 0, 0,}, {0, 1, 1, 1, 0}, {0, 0, 1, 0, 0}};
    int habcruz [3][5] ={{0, 0, 1, 0, 0}, {1, 1, 1, 1, 1}, {0, 0, 1, 0, 0}};

    inserirHabcone(tabuleiroM, habcone, 0, 3);
    inserirHaboctaedro(tabuleiroM, haboctaedro, 4, 0);
    inserirHabcruz(tabuleiroM, habcruz, 7, 5 );

    imprimirTabuleiro(tabuleiroM);

    printf("\n");
    return 0;
}
