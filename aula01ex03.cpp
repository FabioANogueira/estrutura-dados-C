#include <iostream>

int main() {
    /*Declarando um vetor de inteiros com 10 elementos*/
    int c[10];

    /*Inicializando os elementos do vetor com valores específicos*/
    c[0] = 14;
    c[1] = 0;
    c[2] = 13;

    /*Atribuindo valores a outros elementos do vetor*/
    c[5] = 30; /*Atribuindo o valor 30 ao elemento de índice 5 do vetor c*/
    c[7] = 40; /*Atribuindo o valor 40 ao elemento de índice 7 do vetor c*/
    c[8] = 50; /*Atribuindo o valor 50 ao elemento de índice 8 do vetor c*/

    /*Iteração para imprimir os valores dos elementos do vetor*/
    for (int i = 0; i < 10; i++) {
        std::cout << "c[" << i << "] = " << c[i] << std::endl; /*Imprimindo o valor de cada elemento do vetor c*/
    }

    return 0;
}
/*Declarando e inicializando os elementos de um vetor*/

int c[10];
int c[10] = {14, 0, 13};/*14,0,13 serão so três primeiros*/


/*Sintaxe de colchetes*/
c[5] = 30; /*Atribuindo o valor 30 ao elemento de índice 5 do vetor c*/
c[7] = 40; /*Atribuindo o valor 40 ao elemento de índice 7 do vetor c*/
c[8] = 50; /*Atribuindo o valor 50 ao elemento de índice 8 do vetor c*/

/*Iterção com FOR*/

for (int i = 0; i < 10; i++) {

    std::cout << "c[" << i << "] = " << c[i] << std::endl; /*Imprimindo o valor de cada elemento do vetor c*/
}

/*Construção*/
int c[] = {14,0,13};

/*Inicialização com laço de repetição*/
int c[10];
for (int i = 0; i < 10; i++) {
    c[i]   = i * 2; /*Inicializando cada elemento do vetor c com o dobro do índice*/
}

