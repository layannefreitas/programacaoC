#include <stdio.h>

int main() {
    int idade;
    float altura; 
    char nome[20]; 

printf("Digite seu nome: ");
    scanf("%s", nome);
   printf("O nome dela é %s\n", nome);
   printf("Digite sua idade: ");
    scanf("%d", &idade);
   printf("A idade dela é %d\n", idade);
   printf("Digite sua altura: ");       
    scanf("%f", &altura);
   printf("A altura dela é %.2f\n", altura);
   printf("O nome dela é %s, ela tem %d anos e mede %.2f metros.\n", nome, idade, altura);
   printf("Tchau!\n");
    return 0;
}

