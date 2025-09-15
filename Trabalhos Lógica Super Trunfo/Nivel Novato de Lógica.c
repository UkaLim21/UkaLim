#include <stdio.h>

int main(){

    // carta 1
char estado1;
char código1[4];
char cidade1[11];
float população1;
float área1;
float pib1;
int ponto1;
float densidade1, pibPerCapita1;

 // carta 2
char estado2;
char código2[4];
char cidade2[12];
float população2;
float área2;
float pib2;
int ponto2;
float densidade2, pibPerCapita2;



// Carta 1
printf("Digite o Estado: \n");
scanf("%c", &estado1);

printf("Digite o Código: \n");
scanf("%s", código1);

printf("Digite o nome da Cidade: \n");
scanf("%s", cidade1);

printf("Digite a População: \n");
scanf("%f", &população1);

printf("Digite a Área(em km²): \n");
scanf("%f", &área1);

printf("Digite o PIB (em bilhões de reais): \n");
scanf("%f", &pib1);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &ponto1);

densidade1 = população1 / área1;
pibPerCapita1 = (pib1 * 1000000000) / população1; 


// Carta 2
printf("Digite o Estado: \n");
scanf(" %c", &estado2);

printf("Digite o Código: \n");
scanf("%s", código2);

printf("Digite o nome da Cidade: \n");
scanf("%s", cidade2);

printf("Digite a População: \n");
scanf("%f", &população2);

printf("Digite a Área(em km²): \n");
scanf("%f", &área2);

printf("Digite o PIB (em bilhões de reais): \n");
scanf("%f", &pib2);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &ponto2);

densidade2 = população2 / área2;
pibPerCapita2 = (pib2 * 1000000000) / população2; 


//Carta 01
printf("\n=== Carta 1 ===\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", código1);
printf("Cidade: %s\n", cidade1);
printf("População: %.3f\n", população1);
printf("Área (em Km): %.3fkm²\n", área1);
printf("PIB: %.3f bilhões de reais\n", pib1);
printf("Núremo de Pontos Turísticos: %d\n", ponto1);
printf("Densidade populaciona: %.14fhab/km²\n", densidade1);
printf("PIB per Capita: %.14freais\n", pibPerCapita1);

//carta 02
printf("\n=== Carta 2 ===\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", código2);
printf("Cidade: %s\n", cidade2);
printf("População: %.3f\n", população2);
printf("Área (em Km): %.3fkm²\n", área2);
printf("PIB: %.3f bilhões de reais\n", pib2);
printf("Núremo de Pontos Turísticos: %d\n", ponto2);
printf("Densidade populaciona: %.14fhab/km²\n", densidade2);
printf("PIB per Capita: %.14freais\n", pibPerCapita2);

  // ===== Comparação (atributo escolhido: População) =====
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%c): %.3f habitantes\n", cidade1, estado1, população1);
    printf("Carta 2 - %s (%c): %.3f habitantes\n", cidade2, estado2, população2);

    if(população1 > população2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if(população2 > população1){
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

return 0;
}
