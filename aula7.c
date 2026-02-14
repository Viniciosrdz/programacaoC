#include <stdio.h>
int main() {
 char ProdutoA[30] = "Produto A";
 char ProdutoB[30] = "Produto B";

 unsigned int EstoqueA = 1000;
 unsigned int EstoqueB = 2000;

 float ValorA = 10.50;
 float ValorB = 20.40;

 unsigned int EstoqueMinimoA = 500;
 unsigned int EstoqueMinimoB = 2500;
 double TotalValorA;
 double TotalValorB;
 int ResultadoA, ResultadoB;

 printf("Total de %s em Estoque %u\n Valor da Unidade é R$ %.2f Valor Total R$ %.2f\n", ProdutoA, EstoqueA, ValorA, TotalValorA = EstoqueA * ValorA);
 printf("Total de %s em Estoque %u\n Valor da Unidade é R$ %.2f Valor Total R$ %.2f\n", ProdutoB, EstoqueB, ValorB, TotalValorB = EstoqueB * ValorB);

    ResultadoA = (EstoqueA > EstoqueMinimoA);
    ResultadoB = (EstoqueB > EstoqueMinimoB);

 printf("O Produto %s está abaixo do estoque minimo? %d\n", ProdutoA, ResultadoA);
 printf("O Produto %s está abaixo do estoque minimo? %d\n", ProdutoB, ResultadoB);

 printf("O valor total do A (R$ %.2f) é maior que o valor total do B? (R$ %.2f) %d\n", EstoqueA*ValorA, EstoqueB*ValorB, (EstoqueA*ValorA) > (EstoqueB*ValorB));

 return 0;
}
