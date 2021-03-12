#include <stdio.h>

// Função principal
int main() {

    // Declarando um inteiro (4 bytes) e um caractere (1 byte)
    int inteiro;
    char caractere;

    // Mensagem de orientação
    printf("Digite um valor inteiro seguido de um caractere: ");

    // Atribuindo os valores recebidos aos ENDEREÇOS (representado pelo &) das variáveis
    // 'inteiro' e 'caractere', respectivamente
    scanf("%d %c", &inteiro, &caractere);

    // Exibindo na tela o valor de ambas as variáveis
    // A ordem de inserção dos parâmetros da função printf é importante

    // Imprimindo o caractere com inteiro (%d) e o inteiro como caractere (%c)
    printf("Inteiro: %d | Caractere: %c\n", caractere, inteiro);
    // Imprimindo o inteiro como inteiro (%d) e o caractere como caractere (%c)
    printf("Inteiro: %d | Caractere: %c\n", inteiro, caractere);

    // Retorno ao sistema operacional
    return 0;
}
