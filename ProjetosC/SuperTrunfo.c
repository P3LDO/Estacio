#include <stdio.h>

int main (){

    char Estado1[1], Estado2[1];
    char Codigo1[4], Codigo2[4];
    char Nome_C1[50], Nome_C2[50];
    int Turi1[10], Turi2[10]; //pontos turisticos
    int Polp1[10], Polp2[10]; //polpulação
    float Area1[10], Area2[10];
    float pib1[10], pib2[10]; 

        printf("==============================================================\n");
        printf("       incira a letra do primeiro estado (*de A a H):         \n");
        printf("==============================================================\n");
        scanf("%s", Estado1 );

        printf("==============================================================\n");
        printf("               agora escreva o codigo do estado:              \n");
        printf("==============================================================\n");
        scanf("%s", Codigo1 );

        printf("==============================================================\n");
        printf("                agora escreva o nome do estado:               \n");
        printf("==============================================================\n");
        scanf("%s", Nome_C1 );

        printf("==============================================================\n");
        printf("   agora escreva numero de pessoas que vive nesse estado:     \n");
        printf("==============================================================\n");
        scanf("%d", Polp1 );

        printf("==============================================================\n");
        printf("           agora escreva a area em m2 desse estado:           \n");
        printf("==============================================================\n");
        scanf("%f", Area1 );

        printf("==============================================================\n");
        printf("               agora escreva o PIB desse estado:              \n");
        printf("==============================================================\n");
        scanf("%f", pib1 );

        printf("==============================================================\n");
        printf("    agora escreva numero de pontos turisticos do estado:      \n");
        printf("==============================================================\n");
        scanf("%d", Turi1 );
    

        printf("==============================================================\n");
        printf("Os dados da carta 1 sao: \n");
        printf("Estado: %s\n", &Estado1); 
        printf("Codigo: %s\n", &Codigo1);
        printf("Nome: %s\n", &Nome_C1);
        printf("Polpulacao: %d\n", &Polp1);
        printf("Area (M2): %f\n", &Area1);
        printf("PIB: %f\n", &pib1);
        printf("Pontos Turisticos: %d\n", &Turi1);
        printf("==============================================================\n");





        printf("==============================================================\n");
        printf("       incira a letra do segundo estado (*de A a H):         \n");
        printf("==============================================================\n");
        scanf("%s", Estado2 );

        printf("==============================================================\n");
        printf("               agora escreva o codigo do estado:              \n");
        printf("==============================================================\n");
        scanf("%s", Codigo2 );

        printf("==============================================================\n");
        printf("                agora escreva o nome do estado:               \n");
        printf("==============================================================\n");
        scanf("%s", Nome_C2 );

        printf("==============================================================\n");
        printf("   agora escreva numero de pessoas que vive nesse estado:     \n");
        printf("==============================================================\n");
        scanf("%d", Polp2 );

        printf("==============================================================\n");
        printf("           agora escreva a area em m2 desse estado:           \n");
        printf("==============================================================\n");
        scanf("%f", Area2 );

        printf("==============================================================\n");
        printf("               agora escreva o PIB desse estado:              \n");
        printf("==============================================================\n");
        scanf("%f", pib2 );

        printf("==============================================================\n");
        printf("    agora escreva numero de pontos turisticos do estado:      \n");
        printf("==============================================================\n");
        scanf("%d", Turi2 );
    

        printf("==============================================================\n");
        printf("Os dados da carta 1 sao: \n");
        printf("Estado: %s\n", &Estado2); 
        printf("Codigo: %s\n", &Codigo2);
        printf("Nome: %s\n", &Nome_C2);
        printf("Polpulacao: %d\n", &Polp2);
        printf("Area (M2): %f\n", &Area2);
        printf("PIB: %f\n", &pib2);
        printf("Pontos Turisticos: %d\n", &Turi2);
        printf("==============================================================\n");
    
    return 0;
}