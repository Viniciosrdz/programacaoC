#include <stdio.h>

int main(){
    int numero = 5, resultado;
    resultado = numero % 2;

    int estoque = 5;

    printf("A variavel resultado tem o valor: %d\n", resultado);

    if(resultado == 0){
        printf("O número %d é par\n", numero);
    } else {
        printf("O número %d é ímpar\n", numero);
    }

    if(estoque <= 5){
 printf("O estoque está baixo\n");
 }


}
