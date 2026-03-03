#include <stdio.h>
int main(){
    
 int idade1; 
 int idade2;
  printf("Digite a idade da pessoa 1: ");
    scanf("%d", &idade1);
    
 printf("Digite a idade da pessoa 2: ");
  scanf("%d", &idade2);

    if(idade1 > idade2){
        printf("A pessoa 1 é mais velha que a pessoa 2\n");
    } else if(idade1 < idade2){
        printf("A pessoa 2 é mais velha que a pessoa 1\n");
    } else {
        printf("As pessoas têm a mesma idade\n");
    }

return 0;
}
 