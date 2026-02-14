#include <stdio.h>
/*A seguir, você tem uma lista dos principais especificadores utilizados:
 %d: Imprime um inteiro no formato decimal.
 %i: Equivalente a %d.
 %f: Imprime um número de ponto flutuante no formato padrão.
 %e: Imprime um número de ponto flutuante na notação científica.
 %c: Imprime um único caractere.
 %s: Imprime uma cadeia (string) de caracteres.*/

int main(){
printf("Olá, Mundo!\n");
    char nome[] = "Vinicios";
printf("Meu nome é %s.\n", nome);
    int idade = 32;
printf("Eu tenho %d anos.\n", idade);

    float altura = 1.70;
printf("Minha altura é %.2f metros.\n", altura);

    double peso = 95.5;
printf("Meu peso é %.2f kg.\n", peso);

    double salario = 870.00;
printf("Meu salário é R$ %.2f.\n", salario);

return 0;
}