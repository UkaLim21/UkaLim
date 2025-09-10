#include <stdio.h>

int main(){
   int idade, matrícula;
   float altura;
   char nome[50];
   
   printf("Digite a sua idade: \n");
   scanf("%d", &idade);

   printf("Digite a sua altura: \n");
   scanf("%f", &altura);

   printf("Digite o seu nome: \n");
   scanf("%s", &nome);

   printf("Digite a sua matrícula: \n");
   scanf("%d", &matrícula);

   printf("Nome do aluno: %s - Matrícula: %d\n", nome, matrícula);
   printf("Idade: %d - Altura: %f", idade, altura);

  return 0;
 }

