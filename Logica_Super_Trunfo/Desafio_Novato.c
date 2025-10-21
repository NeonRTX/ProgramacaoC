#include <stdio.h>
#include <string.h>


void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
//criado todas as variaveis usadas tanto na carta 1 quanto na carta 2
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;

    float densidade1, densidade2;
    float PIBpercapita1, PIBpercapita2;

    float SuperPoder1, SuperPoder2;

    float ResultadoPopulacao, ResultadoArea, ResultadoPIB, ResultadoTuristico, ResultadoDensidade, ResultadoPIBPercapita, ResultadoSuperPoder;


// Área para entrada de dados


//printf pedindo o nome do estado da carta 1   
printf("Carta 1\n");    
printf("Digite o nome do estado: \n");
fgets(estado1, sizeof(estado1), stdin);
estado1[strcspn(estado1, "\n")] = '\0';

//printf pedindo o nome código da carta 1
printf("Digite o código: \n");
scanf("%s", codigo1);

//printf pedindo a cidade da carta 1
printf("Digite a cidade: \n");
scanf("%s", cidade1);

//printf pedindo a população da carta 1
printf("Digite a população: \n");
scanf("%d", &populacao1);
 
//printf pedindo a área da carta 1
printf("Digite a área: \n");
scanf("%f", &area1);

//printf pedindo o PIB da carta 1
printf("Digite o PIB: \n");
scanf("%f", &pib1);
 
//printf pedindo os pontos turisticos da carta 1
printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &turistico1);

//Calculo da densidade e do PIB percapita da carta 1
densidade1 = (float)(populacao1 / area1);
PIBpercapita1 = (float)(pib1 / populacao1);

//Calculo Super Poder Carta1
SuperPoder1 = populacao1 + area1 + pib1 + turistico1 + PIBpercapita1 + (1 / densidade1);

limpar_buffer();

//printf pedindo o nome do estado da carta 2
printf("--Carta 2--\n");    
printf("Digite o nome do estado: \n");
fgets(estado2, sizeof(estado2), stdin);

//printf pedindo o nome código da carta 2
printf("Digite o código: \n");
scanf("%s", codigo2);

//printf pedindo a cidade da carta 2
printf("Digite a cidade: \n");
scanf("%s", cidade2);

//printf pedindo a população da carta 2
printf("Digite a população: \n");
scanf("%d", &populacao2);
 
//printf pedindo a área da carta 2
printf("Digite a área: \n");
scanf("%f", &area2);

//printf pedindo o PIB da carta 2
printf("Digite o PIB: \n");
scanf("%f", &pib2);
 
//printf pedindo os pontos turisticos da carta 2
printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &turistico2);

//Calculo da densidade e do PIB percapita da carta 2
densidade2 = (float) (populacao2 / area2);
PIBpercapita2 = (float) (pib2 / populacao2);

//Calculo Super Poder Carta2
SuperPoder2 = populacao2 + area2 + pib2 + turistico2 + PIBpercapita2 + (1 / densidade2);




// Área para exibição dos dados da cidade

//printf mostrando todos os dados cadastrados da carta 1
printf(" --CARTA 1-- \n");
printf("Estado: %s \n", estado1);
printf("Código: %s \n", codigo1);
printf("Nome da Cidade: %s \n", cidade1);
printf("População: %d \n", populacao1);
printf("Área: %f km² \n", area1);
printf("PIB: %f bilhões de reais \n", pib1);
printf("Numero de Pontos Turisticos: %d \n", turistico1);
printf("Densidade Polulacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", PIBpercapita1);
printf("SUPER PODER: %.2f !!!\n", SuperPoder1);


//printf mostrando todos os dados cadastrados da carta 2
printf(" --CARTA 2-- \n");
printf("Estado: %s \n", estado2);
printf("Código: %s \n", codigo2);
printf("Nome da Cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Área: %f km² \n", area2);
printf("PIB: %f bilhões de reais \n", pib2);
printf("Numero de Pontos Turisticos: %d \n", turistico2);
printf("Densidade Polulacional: %.2f hab/km² \n", densidade2);
printf("PIB per Capita: %.2f reais \n", PIBpercapita2);
printf("SUPER PODER: %.2f !!!\n", SuperPoder2);


//comparação de cartas
printf("--COMPARAÇÃO DE CARTAS--\n");
printf("Resultado 1: Carta 1 ganhou\n");
printf("Resultado 0: Carta 2 ganhou\n");

ResultadoPopulacao = (populacao1 > populacao2);
ResultadoArea = (area1 > area2);
ResultadoPIB = (pib1 > pib2);
ResultadoTuristico = (turistico1 > turistico2);
ResultadoDensidade = (1 / densidade1) < (1 / densidade2);
ResultadoPIBPercapita = (PIBpercapita1) > (PIBpercapita2);
ResultadoSuperPoder = (SuperPoder1 > SuperPoder2);


printf("População: %.2f\n", ResultadoPopulacao);
printf("Área: %.2f\n", ResultadoArea);
printf("PIB: %.2f\n", ResultadoPIB);
printf("Pontos Turísticos: %.2f\n", ResultadoTuristico);
printf("Densidade Populacional: %.2f\n", ResultadoDensidade);
printf("PIB Per Capita: %.2f\n", ResultadoPIBPercapita);
printf("SUPER PODER: %.2f\n\n", ResultadoSuperPoder);


//Comparação com IF e ELSE

if(populacao1 > populacao2){
    printf("Carta 1 - %s (%s): ",estado1, codigo1);
    printf("%d\n", populacao1);
    printf("Carta 2 - %s: ",estado2);
    limpar_buffer(); 
    printf("%d\n", populacao2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else{
    printf("Carta 1 - %s (%s): ",estado1, codigo1);
    printf("%d\n", populacao1);
    printf("Carta 2 - %s (%s): ",estado2, codigo2);
    printf("%d\n", populacao2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
}


return 0;
}