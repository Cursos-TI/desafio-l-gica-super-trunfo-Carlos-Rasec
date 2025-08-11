#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    
    // Variáveis separadas para cada atributo da cidade. 
    // Atributos: Nome, estado, código da cidade, população, número de pontos turísticos, área, e PIB.
    
    // Variáveis para armazenar os atributos da cidade:

    //Atributos para a carta A01

    char codigo_da_carta1[10]; // Código da carta
    char nome_da_cidade1[30]; // Nome da cidade
    char estado1[3]; // Estado abreviado
    int populacao1; // População
    int numero_pontos_turisticos1; // Número de pontos turísticos
    float area_em_km1;// Área em km²
    float pib1; // PIB
    float densidadePopulacional1; // Para esse calculo: população / area da cidade
    float PIBperCapita1; // Para esse calculo: pib / população


    //Atributos para a carta A02

    char codigo_da_carta2[10]; // Código da carta
    char nome_da_cidade2[30]; // Nome da cidade
    char estado2[3]; // Estado abreviado
    int populacao2; // População
    int numero_pontos_turisticos2; // Número de pontos turísticos
    float area_em_km2; // Área em km²
    float pib2; // PIB
    float densidadePopulacional2; // Para esse calculo: população / area da cidade
    float PIBperCapita2; // Para esse calculo: pib / população

    // Cadastro das Cartas:
    // scanf para capturar as entradas do usuário para cada atributo.
   
    printf("Para comecar,informe os atributos de cada uma das cartas!\n");
    printf("\nVamos cadastrar a primeira.\n");
    
    printf("\nInforme o codigo da carta:");
    scanf("%s", codigo_da_carta1);

    printf("\nDigite o nome da cidade:");
    scanf("%s", nome_da_cidade1);


    printf("Agora informe o estado,");
    printf("digite de forma abreviada, (Ex. CE):");
    scanf("%s", estado1);

    
    printf("Qual a polulacao dessa cidade:");
    scanf("%d", &populacao1);
    
    printf("Quantos pontos turisticos possui essa cidade:");
    scanf("%d", &numero_pontos_turisticos1);

    printf("Qual a area em KM² desta cidade:");
    scanf("%f", &area_em_km1);

    printf("Por ultimo, Qual o PIB da cidade:");
    scanf("%f", &pib1);
    
    densidadePopulacional1 = populacao1 / area_em_km1; // Para esse calculo: população / area da cidade
    PIBperCapita1 = pib1 / populacao1; // Para esse calculo: pib / população
    
    //capturar os dados da segunda carta
    
    printf("\nAgora é a vez dos atributos da segunda cartas!\n");
    
    printf("\nInforme o codigo da carta:");
    scanf("%s", codigo_da_carta2);

    printf("\nDigite o nome da cidade:");
    scanf("%s", nome_da_cidade2);

    printf("Agora informe o estado,");
    printf("digite de forma abreviada, (Ex. CE):");
    scanf("%s", estado2);

    printf("Qual a polulacao dessa cidade:");
    scanf("%d", &populacao2);
    
    printf("Quantos pontos turisticos possui essa cidade:");
    scanf("%d", &numero_pontos_turisticos2);

    printf("Qual a area em KM² desta cidade:");
    scanf("%f", &area_em_km2);

    printf("Por ultimo, Qual o PIB da cidade:");
    scanf("%f", &pib2);

    densidadePopulacional2 = populacao2 / area_em_km2; // Para esse calculo: população / area da cidade
    PIBperCapita2 = pib2 / populacao2; // Para esse calculo: pib / população

    
    // Exibição dos Dados das Cartas:

    //Carta A01
    printf("\n - - A carta A01 possui os seguintes dados - - \n");
    printf("codigo da carta: %s\n", codigo_da_carta1);
    printf("Cidade: %s\n", nome_da_cidade1);
    printf("Estado: %s\n", estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Pontos Turisticos: %d\n", numero_pontos_turisticos1);
    printf("Area: %f\n", area_em_km1);
    printf("PIB: %f\n", pib1);
    printf("A densidade populacional é de: %.3f\n", densidadePopulacional1);
    printf("PIB per capita de: %.2f\n", PIBperCapita1);
    
    //carta A02
    printf("\n - - A carta A02 possui os seguintes dados - - \n");
    printf("codigo da carta: %s\n", codigo_da_carta2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("Estado: %s\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Pontos Turisticos: %d\n", numero_pontos_turisticos2);
    printf("Area: %f\n", area_em_km2);
    printf("PIB: %f\n", pib2);
    printf("A densidade populacional é de: %.3f\n", densidadePopulacional2);
    printf("PIB per capita de: %.2f\n", PIBperCapita2);

//Agora é a hora de analisar as cartas 
//Será comparado entre elas o valores do PIB per capita 
//A carta com o Valor mais alto será a campeã

    printf("\n**** ANALISANDO OS DADOS DAS CARTAS!!! ****\n");

    printf("Será comparado os valores do PIB per capita de cada uma delas.\n");

    printf("A carta com o Valor mais alto será a campeã.\n");

    printf( "\n A campeã....\n");
     
    // Estrutura de condicionamento da disputa entre as cartas

    if(PIBperCapita1 > PIBperCapita2){
        printf(" %s, venceu o desafio!!! \n CODIGO DA CARTA: %s \n", nome_da_cidade1, codigo_da_carta1 );
    }
    else if (PIBperCapita2 > PIBperCapita1){
        printf(" %s, venceu o desafio!!! \n CODIGO DA CARTA: %s \n", nome_da_cidade2, codigo_da_carta2 );
    }
    else{
        printf(" Uau... temos um EMPATE, as duas cartas possuem o mesmo valor do PIB per capita!");
    }


    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
