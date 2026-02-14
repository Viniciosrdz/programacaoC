#include <stdio.h>
int main(){
    int numero1 = 20;
    int numero2 = 10;
    float quociente = (float) numero1 / numero2; // 'a' explicitamento convertido para float

    printf("antes do incremento: %d\n", numero1);

    /* incremento e decremento */
    numero1++;
    /* incremento  numero1 = numero1 + 1 ou numero1 +=1;*/
        printf("depois do incremento: %d\n", numero1);

    numero1--;
    /* decremento  numero1 = numero1 - 1 ou numero1 -=1 */
    printf("depois do decremento: %d\n", numero1);

    /* pre-incremento e pre-decremento */
    printf("pre-incremento: %d\n", ++numero1);
    printf("pre-decremento: %d\n", --numero1);

    /* pro-incremento e pro-decremento */
    printf("pro-incremento: %d\n", numero1++);
    printf("pro-decremento: %d\n", numero1--);
    printf("quociente:%.2f\n", quociente);

    return 0;
}
