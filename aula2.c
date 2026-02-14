#include <stdio.h>

void entrarDados(){
}
void calcularmedia(){
}
void exibirmedia(){
}
int main(){
    entrarDados();
    calcularmedia();
    exibirmedia();

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

printf("Digite o primeiro numero: \n");
scanf("%d", &numero1);
printf("Digite o segundo numero: \n");
scanf("%d", &numero2);

//operacao soma
soma = numero1 + numero2;

//operacao subtracao
subtracao = numero1 - numero2;

//operacao multiplicacao
multiplicacao = numero1 * numero2;

//operacao divisao
divisao = numero1 / numero2;

printf("A soma dos numeros e: %d\n", soma);
printf("A subtracao dos numeros e: %d\n", subtracao);
printf("A multiplicacao dos numeros e: %d\n", multiplicacao);
printf("A divisao dos numeros e: %d\n", divisao);

/* exemplos de atribuicoes ( outra forma apos o numero +10, -10, *10, /10, %10; o valor sera atualizado)
resuldato = 10
resuldato += 10 
resldato -= 10
resuldato *= 10
resuldato /= 10 
resuldato %= 10
*/


    return 0;
}