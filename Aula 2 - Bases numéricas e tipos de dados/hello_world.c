// Incluindo o cabeçalho da biblioteca Standard Input-Output
#include <stdio.h>

// A função main é a função principal do código. Nela que parte a execução
// do código e ela pode conter outras funções.
int main() {

    // Declaração de um inteiro (4 bytes) em que foi atribuída o valor 7
    // int == int32_t
    int inteiro = 7;

    // Declaração de um caractere (1 byte) em que foi atribuido o caractere 'a'
    char caractere = 'a';

    // Declaração de um short (2 bytes) em que foi atribuido o valor 25
    short pequeno = 25;

    // Declaração de um float (4 bytes) em que foi atribuido o valor 37.25
    double decimal = 37.25;

    // Invocando a função printf, da biblioteca stdio.h (incluida na primeira linha).
    // A função printf exibe na tela o que tem no interior dela.
    printf("Hello World!\n");

    // %d: Máscara para impressão de uma variável inteira
    printf("Valor do número inteiro: %d\n", inteiro);
    // %c: Máscara para impressão de um caractere
    printf("Valor do caractere: %c\n", caractere);
    // %f: Máscara para impressão de um float
    // %lf: Máscara para impressão de um double (long float)
    printf("Valor do float: %.200lf\n", decimal);


    // Como a função main pode ser executada por completo, deve-se retornar 0 ao
    // sistema operacional para informar que a ação foi bem executada.
    return 0;
}
