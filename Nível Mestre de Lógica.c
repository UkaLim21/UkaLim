#include <stdio.h>

int main(){

    // carta 1
    char estado1;
    char codigo1[4];
    char cidade1[20];
    float populacao1, area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1;

    // carta 2
    char estado2;
    char codigo2[4];
    char cidade2[20];
    float populacao2, area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2;

    // Cadastro simplificado (para manter o foco no desafio)
    printf("Digite o Estado da Carta 1: ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta 1: ");
    scanf("%s", codigo1);
    printf("Digite a Cidade da Carta 1: ");
    scanf("%s", cidade1);
    printf("Digite a População: ");
    scanf("%f", &populacao1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    printf("\nDigite o Estado da Carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta 2: ");
    scanf("%s", codigo2);
    printf("Digite a Cidade da Carta 2: ");
    scanf("%s", cidade2);
    printf("Digite a População: ");
    scanf("%f", &populacao2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===== MENU DE COMPARAÇÃO AVANÇADO =====
    int opcao1, opcao2;

    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o PRIMEIRO atributo: ");
    scanf("%d", &opcao1);

    // Segundo menu dinâmico
    printf("\nAgora escolha o SEGUNDO atributo (diferente do primeiro):\n");
    for(int i=1; i<=5; i++){
        if(i != opcao1){
            switch(i){
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    scanf("%d", &opcao2);

    // Função auxiliar: retorna o valor do atributo escolhido
    float getValor(int opcao, float pop, float area, float pib, int pontos, float densidade){
        switch(opcao){
            case 1: return pop;
            case 2: return area;
            case 3: return pib;
            case 4: return pontos;
            case 5: return densidade;
        }
        return 0;
    }

    // Nomes dos atributos para exibir
    char* nomeAtributo(int opcao){
        switch(opcao){
            case 1: return "População";
            case 2: return "Área";
            case 3: return "PIB";
            case 4: return "Pontos Turísticos";
            case 5: return "Densidade Demográfica";
        }
        return "";
    }

    // Coleta valores escolhidos
    float valor1A = getValor(opcao1, populacao1, area1, pib1, pontos1, densidade1);
    float valor2A = getValor(opcao1, populacao2, area2, pib2, pontos2, densidade2);

    float valor1B = getValor(opcao2, populacao1, area1, pib1, pontos1, densidade1);
    float valor2B = getValor(opcao2, populacao2, area2, pib2, pontos2, densidade2);

    // Regras de comparação
    int resultadoA = (opcao1 == 5) ? (valor1A < valor2A ? 1 : (valor1A > valor2A ? 2 : 0))
                                   : (valor1A > valor2A ? 1 : (valor2A > valor1A ? 2 : 0));
    int resultadoB = (opcao2 == 5) ? (valor1B < valor2B ? 1 : (valor1B > valor2B ? 2 : 0))
                                   : (valor1B > valor2B ? 1 : (valor2B > valor1B ? 2 : 0));

    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("%s vs %s\n", cidade1, cidade2);
    printf("Atributo 1 (%s): %.2f vs %.2f → %s\n",
           nomeAtributo(opcao1), valor1A, valor2A,
           resultadoA == 1 ? cidade1 : resultadoA == 2 ? cidade2 : "Empate");

    printf("Atributo 2 (%s): %.2f vs %.2f → %s\n",
           nomeAtributo(opcao2), valor1B, valor2B,
           resultadoB == 1 ? cidade1 : resultadoB == 2 ? cidade2 : "Empate");

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    printf("\nVencedor final: %s\n",
           soma1 > soma2 ? cidade1 :
           soma2 > soma1 ? cidade2 : "Empate!");

    return 0;
}