#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int i;
    for( i = 0 ; i < 100 ; i++){
        printf("=");
    }

    printf("\n Tela inicial Cadastro Para Compra\n");

    char NomeCliente[10];
    char NomedoVendedor[10];
    float precodoproduto;
    int formadepagamento;
    float resultado;
    float vista;
    int parcelas;
    char nomedoproduto[20];
    
    


    
printf(" Digite o nome do Cliente\n");
fgets(NomeCliente,20,stdin);

printf("Digite o Nome do Vendedor\n");
fgets(NomedoVendedor,20,stdin);

printf("Digite o Nome do produto\n");
fgets(nomedoproduto,20,stdin);

printf("Digite o Preço do Produto\n");
scanf ("%f" ,& precodoproduto);

printf("Digite qual será a forma de pagamento\n Digite 0 para A vista\n Digite 1 para parcelado\n");
scanf("%d" ,& formadepagamento);

if (formadepagamento == 1){ 
printf("Digite o número de parcelas:\n");
scanf("%d", &parcelas);
} else { (parcelas = 0);
}

if (formadepagamento == 0){
resultado = precodoproduto - (precodoproduto*0.10); }
else { 
    resultado = precodoproduto + (precodoproduto*0.15); 
}



//estamos conversando com o cliente para que ele digite seus dados pessoais, nome, nome do vendedor, preço do produto e forma de pagamento.



//Criando um arquivo txt para guardar os dados do cliente na base

FILE *arquivo = fopen("files/telacliente.txt","a");



fprintf(arquivo, "Nome: %s" ,NomeCliente);
fprintf(arquivo, "Nome do vendedor: %s" ,NomedoVendedor);
fprintf(arquivo, "Nome do produto: %s" ,nomedoproduto);
fprintf(arquivo, "Preço do produto: %.2f\n" ,precodoproduto);
fprintf(arquivo, "Valor final do produto: %.2f\n", resultado);
fprintf(arquivo, "Número de parcelas: %d\n", parcelas);

//Fechar o arquivo txt
fclose(arquivo);
return 0; 
}


