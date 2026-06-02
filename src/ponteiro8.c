#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int i;
    for( i = 0 ; i < 100 ; i++){
        printf("=");
    }

    printf("\nFicha de cadastro inicial\n");
    char primeiroNome[10];
    char sobrenome[10];
    char email[50];
    int idade;

printf("Digite o seu primeiro nome \n");
fgets(primeiroNome,10,stdin);

printf("Digite o seu sobrenome \n");
fgets(sobrenome,10,stdin);

printf("Digite o seu e-mail: \n");
fgets(email,50,stdin);

printf("Digite a sua idade: \n");
scanf("%d",&idade);





    // Vamos criar um arquivo de texto para guardar os dados dos clientes

    FILE *arquivo = fopen("files/cadastro.txt","a");

fprintf(arquivo,"Nome: %s\n",primeiroNome);
fprintf(arquivo,"Sobrenome: %s\n",sobrenome);
fprintf(arquivo,"E-Mail: %s\n",email);
fprintf(arquivo,"Idade: %d\n",idade);    
fprintf(arquivo,"========================================================================");



    //Vamos fechar o arquivo
    fclose(arquivo);
    return 0;


    }