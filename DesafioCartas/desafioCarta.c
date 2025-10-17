#include <stdio.h>

int main(){

//Carta: 1;

    char estado1[30] = "Ceará";
    char cidade1[30] = "Fortaleza";
    char código_da_carta1[10] = "A1";
    int população1 = 2678000;
    int pontos_turísticos1 = 15;
    float área_km21 = 313.14;
    float PIB1 = 130.5;
    float densidade_populacional1 = população1 / área_km21;
    float pib_per_capita1 = PIB1 / população1;


//Carta: 2;

    char estado2[30] = "Bahia";
    char cidade2[30] = "Salvador"; 
    char código_da_carta2[10] = "A2";
    int população2 = 2880000;
    int pontos_turísticos2 = 20;
    float área_km22 = 693.8;
    float PIB2 = 150.2;
    float densidade_populacional2 = população2 / área_km22;
    float pib_per_capita2 = PIB2 / população2;


    printf("Carta: %s - %s\n", código_da_carta1, cidade1);
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", população1);
    printf("Área (km²): %.2f\n", área_km21);
    printf("PIB (R$ bilhões): %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos_turísticos1);
    printf("Densidade Populacional (hab/km²): %.2f\n", densidade_populacional1);
    printf("PIB per Capita (R$): %.30f\n\n\n", pib_per_capita1 );


    printf("Carta: %s - %s\n", código_da_carta2, cidade2);
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", população2);
    printf("Área (km²): %.2f\n", área_km22);    
    printf("PIB (R$ bilhões): %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos_turísticos2);
    printf("Densidade Populacional (hab/km²): %.2f\n", densidade_populacional2);
    printf("PIB per Capita (R$): %.30f\n\n", pib_per_capita2 );

    





    return 0;

    


}
    