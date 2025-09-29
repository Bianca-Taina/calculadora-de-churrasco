#include <stdio.h>
// Variável global
float totalArrecadado = 0;

//Procedimento: adiciona a contribuição de um parcicipante
void adicionaContribuiçao(float valor){
    totalArrecadado += valor;
    printf("Contribuição de R$ %.2f Adicionada! Total: R$ %.2f", totalArrecadado);
}
// Função: calcula quantidade de carne por pessoa(0.5kg por pesoas)

float calculaCarne(int qtdPessoas){
    return qtdPessoas * 0.5;
}



// Procedimento para mostrar o resumo
void mostraResumo(int qtdPessoas){
    float carne = calculaCarne(qtdPessoas)
    float media = totalArrecadado / qtdPessoas;
    printf("\n===== RESUMO CHURRASCO =====\n");
    printf("Participantes: %d\n",qtdPessoas);
    printf("Carne necessária: %.2f KG\n" carne);
    printf("Total arrecadado: R$ %.2f\n",totalArrecadado);
    printf("Média por pessoas: R$ %2f\n", media);
    printf("==============================")

}



int main(){
 int pessoas;
 float valor;

 printf("Digite o número de pessoas: ");
 scanf("%d",&pessoas);

 mostraResumo(pessoas);
}