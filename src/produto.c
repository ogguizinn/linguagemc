#include <stdio.h>
int main()
{
    // Vamos usar as variáveis com o tipo de dado float, pois,
    // este programa recebe valores com casas decimais
    float preco;
    float taxa;
    float parcelas;
    float resultado;
    float resultadoParcelas;
    /*
    Camel Case ( nomeCompletoCliente)
    snake Case ( nome_Completo_Cliente)
    Simple case (nomecompletocliente)
    nomecompletocliente
*/

    printf("Digite o preço do produto e tecle enter\n");
    scanf("%f", &preco);

    printf("Digite a taxa de acréscimo sem o símbolo de porcentagem:\n");
    scanf("%f", &taxa);

    printf("digite o número de parcelas e tecle Enter\n");
    scanf("%f", &parcelas);

    resultado = preco * (taxa / 100) + preco;
    resultadoParcelas = resultado / parcelas;

    printf("o valor final do produto é R$ %.2f\n", resultado);
    printf("O valor da parcela é R$ %.2f\n", resultadoParcelas);
    
    return 0;
}