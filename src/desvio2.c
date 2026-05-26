#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

//Comando system que chama uma execução do sistema operacional 
//que, neste caso será o comando clear
system("clear");



    printf("Insira a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Insira a segunda nota:\n");
    scanf("%f", &nota2);
    printf("Insira a terceira nota:\n");
    scanf("%f", &nota3);
    printf("Insira a quarta nota:\n");
    scanf("%f", &nota4);

     media = (nota1 +nota2 +nota3 +nota4) / 4;

    if ( media >= 7 ) {
        printf("O aluno está aprovado com  média %.2f\n", media);
    }else {
        printf ("O aluno está reprovado com  média %.2f\n", media);

printf("\n#################################################################\n");
printf("Endereço de memória da variável bitak %p \n", &nota1);
printf("Endereço de memória da variável bitak %p \n", &nota2);
printf("Endereço de memória da variável bitak %p \n", &nota3);
printf("Endereço de memória da variável bitak %p \n", &nota4);






}
 
    return 0;

 }



