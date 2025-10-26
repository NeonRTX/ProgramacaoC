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
estado2[strcspn(estado2, "\n")] = '\0';

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
printf("Área: %-f km² \n", area2);
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


//Menu de escolha de atributo
printf("Qual o primeiro atributo que deseja comparar?\n");
printf("1- População\n");
printf("2- Área\n");
printf("3- PIB\n");
printf("4- Pontos Turísticos\n");
printf("5- Densidade Populacional\n");
printf("6- PIB Per Capita\n");
printf("7- SUPER PODER\n");
int opcaoCompara1 = 0;
scanf("%d", &opcaoCompara1);

//switch case com as opções e os if e else para cada situação da batalha
switch (opcaoCompara1)
{
case 1:
    if(populacao1 > populacao2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: População)\n");
    printf("Carta 1 - %s (%s): %d\n",estado1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d\n",estado2, codigo2, populacao2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(populacao1 < populacao2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: População)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, populacao2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: População)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, populacao2);
    printf("HOUVE UM EMPATE\n");
}
    break;
case 2:
    if(area1 > area2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Área)\n");
    printf("Carta 1 - %s (%s): %d\n",estado1, codigo1, area1);
    printf("Carta 2 - %s (%s): %d\n",estado2, codigo2, area2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(area1 < area2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Área)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, area1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, area2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Área)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, area1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, area2);
    printf("HOUVE UM EMPATE\n");
}
    break;
case 3:
    if(pib1 > pib2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: PIB)\n");
    printf("Carta 1 - %s (%s): %d\n",estado1, codigo1, pib1);
    printf("Carta 2 - %s (%s): %d\n",estado2, codigo2, pib2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(area1 < area2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: PIB)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, pib1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, pib2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: PIB)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, pib1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, pib2);
    printf("HOUVE UM EMPATE\n");
}    
    break;
case 4:
    if(turistico1 > turistico2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Pontos Turísticos)\n");
    printf("Carta 1 - %s (%s): %d\n",estado1, codigo1, turistico1);
    printf("Carta 2 - %s (%s): %d\n",estado2, codigo2, turistico2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(area1 < area2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Pontos Turísticos)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, turistico1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, turistico2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Pontos Turísticos)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, turistico1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, turistico2);
    printf("HOUVE UM EMPATE\n");
}    
    break;
case 5:
     if(densidade1 < densidade2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s (%s): %.2f\n",estado1, codigo1, densidade1);
    printf("Carta 2 - %s (%s): %.2f\n",estado2, codigo2, densidade2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(area1 > area2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s (%s): %.2f \n",estado1, codigo1, densidade1);
    printf("Carta 2 - %s (%s): %.2f \n",estado2, codigo2, densidade2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s (%s): %.2f \n",estado1, codigo1, densidade1);
    printf("Carta 2 - %s (%s): %.2f \n",estado2, codigo2, densidade2);
    printf("HOUVE UM EMPATE\n");
}    
    break;
case 6:
    if(PIBpercapita1 > PIBpercapita2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: PIB Per Capita)\n");
    printf("Carta 1 - %s (%s): %.2f\n",estado1, codigo1, PIBpercapita1);
    printf("Carta 2 - %s (%s): %.2f\n",estado2, codigo2, PIBpercapita2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(area1 < area2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: PIB Per Capita)\n");
    printf("Carta 1 - %s (%s): %.2f \n",estado1, codigo1, PIBpercapita1);
    printf("Carta 2 - %s (%s): %.2f \n",estado2, codigo2, PIBpercapita2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: PIB Per Capita)\n");
    printf("Carta 1 - %s (%s): %.2f \n",estado1, codigo1, PIBpercapita1);
    printf("Carta 2 - %s (%s): %.2f \n",estado2, codigo2, PIBpercapita2);
    printf("HOUVE UM EMPATE\n");
}    
    break;
case 7:
    if(SuperPoder1 > SuperPoder2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: SUPER PODER)\n");
    printf("Carta 1 - %s (%s): %.2f\n",estado1, codigo1, SuperPoder1);
    printf("Carta 2 - %s (%s): %.2f\n",estado2, codigo2, SuperPoder2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(area1 < area2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: SUPER PODER)\n");
    printf("Carta 1 - %s (%s): %.2f \n",estado1, codigo1, SuperPoder1);
    printf("Carta 2 - %s (%s): %.2f \n",estado2, codigo2, SuperPoder2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: SUPER PODER)\n");
    printf("Carta 1 - %s (%s): %.2f \n",estado1, codigo1, SuperPoder1);
    printf("Carta 2 - %s (%s): %.2f \n",estado2, codigo2, SuperPoder2);
    printf("HOUVE UM EMPATE\n");
}    
    break;
default:
    break;
}

//Menu de escolha do segundo atributo
printf("Qual o segundo atributo que deseja comparar?\n");
printf("1- População\n");
printf("2- Área\n");
printf("3- PIB\n");
printf("4- Pontos Turísticos\n");
printf("5- Densidade Populacional\n");
printf("6- PIB Per Capita\n");
printf("7- SUPER PODER\n");
int opcaoCompara2 = 0;
scanf("%d", &opcaoCompara2);

//if para se escolheu o mesmo atributo
if (opcaoCompara1 == opcaoCompara2){
    printf("Você escolheu o mesmo atributo! Escolha um atributo diferente...\n");
    scanf("%d", &opcaoCompara2);
} else
//switch case com as opções e os if e else para cada situação da batalha
switch (opcaoCompara2)
{
case 1:
    if(populacao1 > populacao2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: População)\n");
    printf("Carta 1 - %s (%s): %d\n",estado1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d\n",estado2, codigo2, populacao2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(populacao1 < populacao2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: População)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, populacao2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: População)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, populacao2);
    printf("HOUVE UM EMPATE\n");
}
    break;
case 2:
    if(area1 > area2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Área)\n");
    printf("Carta 1 - %s (%s): %d\n",estado1, codigo1, area1);
    printf("Carta 2 - %s (%s): %d\n",estado2, codigo2, area2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(area1 < area2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Área)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, area1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, area2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Área)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, area1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, area2);
    printf("HOUVE UM EMPATE\n");
}
    break;
case 3:
    if(pib1 > pib2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: PIB)\n");
    printf("Carta 1 - %s (%s): %d\n",estado1, codigo1, pib1);
    printf("Carta 2 - %s (%s): %d\n",estado2, codigo2, pib2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(pib1 < pib2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: PIB)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, pib1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, pib2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: PIB)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, pib1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, pib2);
    printf("HOUVE UM EMPATE\n");
}    
    break;
case 4:
    if(turistico1 > turistico2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Pontos Turísticos)\n");
    printf("Carta 1 - %s (%s): %d\n",estado1, codigo1, turistico1);
    printf("Carta 2 - %s (%s): %d\n",estado2, codigo2, turistico2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(turistico1 < turistico2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Pontos Turísticos)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, turistico1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, turistico2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Pontos Turísticos)\n");
    printf("Carta 1 - %s (%s): %d \n",estado1, codigo1, turistico1);
    printf("Carta 2 - %s (%s): %d \n",estado2, codigo2, turistico2);
    printf("HOUVE UM EMPATE\n");
}    
    break;
case 5:
     if(densidade1 < densidade2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s (%s): %.2f\n",estado1, codigo1, densidade1);
    printf("Carta 2 - %s (%s): %.2f\n",estado2, codigo2, densidade2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(densidade1 > densidade2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s (%s): %.2f \n",estado1, codigo1, densidade1);
    printf("Carta 2 - %s (%s): %.2f \n",estado2, codigo2, densidade2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s (%s): %.2f \n",estado1, codigo1, densidade1);
    printf("Carta 2 - %s (%s): %.2f \n",estado2, codigo2, densidade2);
    printf("HOUVE UM EMPATE\n");
}    
    break;
case 6:
    if(PIBpercapita1 > PIBpercapita2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: PIB Per Capita)\n");
    printf("Carta 1 - %s (%s): %.2f\n",estado1, codigo1, PIBpercapita1);
    printf("Carta 2 - %s (%s): %.2f\n",estado2, codigo2, PIBpercapita2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(PIBpercapita1 < PIBpercapita2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: PIB Per Capita)\n");
    printf("Carta 1 - %s (%s): %.2f \n",estado1, codigo1, PIBpercapita1);
    printf("Carta 2 - %s (%s): %.2f \n",estado2, codigo2, PIBpercapita2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: PIB Per Capita)\n");
    printf("Carta 1 - %s (%s): %.2f \n",estado1, codigo1, PIBpercapita1);
    printf("Carta 2 - %s (%s): %.2f \n",estado2, codigo2, PIBpercapita2);
    printf("HOUVE UM EMPATE\n");
}    
    break;
case 7:
    if(SuperPoder1 > SuperPoder2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: SUPER PODER)\n");
    printf("Carta 1 - %s (%s): %.2f\n",estado1, codigo1, SuperPoder1);
    printf("Carta 2 - %s (%s): %.2f\n",estado2, codigo2, SuperPoder2);
    printf("Resultado: Carta 1 (%s) Venceu!\n", estado1);
} else if(SuperPoder1 < SuperPoder2){
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: SUPER PODER)\n");
    printf("Carta 1 - %s (%s): %.2f \n",estado1, codigo1, SuperPoder1);
    printf("Carta 2 - %s (%s): %.2f \n",estado2, codigo2, SuperPoder2);
    printf("Resultado: Carta 2 (%s) Venceu!\n", estado2);
} else{    
    printf("--COMPARAÇÃO DE CARTAS--\n");
    printf("(Atributo: SUPER PODER)\n");
    printf("Carta 1 - %s (%s): %.2f \n",estado1, codigo1, SuperPoder1);
    printf("Carta 2 - %s (%s): %.2f \n",estado2, codigo2, SuperPoder2);
    printf("HOUVE UM EMPATE\n");
}    
    break;
default:
    break;
}

return 0;
}